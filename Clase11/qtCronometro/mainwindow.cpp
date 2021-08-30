#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QTimer * time = new QTimer(this);
    time->connect(time, SIGNAL(timeout()), this, SLOT(timeout()));
    time->setInterval(1000);
    time->start();
}

void MainWindow::timeout()
{
    this->ui->lcdNumber->display(this->ui->lcdNumber->value() + 1);
}
