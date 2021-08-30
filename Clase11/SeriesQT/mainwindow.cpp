#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(tiempo()));

    this->juego = new Juego();
    this->refresh();
}

void MainWindow::tiempo(){
    int progreso = this->ui->progressBar->value();

    if (progreso == 100) {
        this->timer->stop();
        QMessageBox msg(this);
        msg.warning(this,"Mal", "Time Out !!!");
        this->juego->timeOut();
        juego->generarSecuencia();
        this->refresh();
    } else {
        this->ui->progressBar->setValue(progreso + 1);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::refresh()
{
    timer->start(100);
    this->ui->lcdNumber->display(juego->getPuntaje());
    this->ui->label->setText(QString::number(juego->getPrimero()));
    this->ui->label_2->setText(QString::number(juego->getSegundo()));
    this->ui->label_3->setText(QString::number(juego->getCuarto()));
    this->ui->spinBox->setValue(0);
    this->ui->progressBar->setValue(0);
}

void MainWindow::on_pushButton_clicked()
{
    this->timer->stop();
    int respuesta = this->ui->spinBox->value();
    QMessageBox msg(this);
    if (this->juego->validar(respuesta)) {
        msg.information(this,"Ganaste", "Ganaste!!!");
    } else {
        msg.warning(this,"Mal", "Perdiste !!!");
    }
    juego->generarSecuencia();
    refresh();
}
