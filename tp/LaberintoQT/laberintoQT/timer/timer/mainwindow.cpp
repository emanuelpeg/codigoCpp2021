#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <time.h>
#include <QLabel>
#include <QTimer>
#include <QMessageBox>
#include <QKeyEvent>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
    int ** matriz = new int*[50];
    for (int i = 0; i < 50; i++) {
        matriz[i] = new int[50];
        for (int j = 0; j < 50; j++) {
            matriz[i][j] = rand() % 4;
        }
    }

    this->labels = new QLabel**[50];
    for (int i = 0; i < 50; i++) {
        this->labels[i] = new QLabel*[50];
        for (int j = 0; j < 50; j++) {

                this->labels[i][j] = new QLabel();
                this->labels[i][j]->setText(QString::number(matriz[i][j]));
                this->ui->gridLayout->addWidget(labels[i][j] ,i,j);
        }

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dibujarArtefacto() {

}


void MainWindow::keyPressEvent(QKeyEvent *e) {

}
