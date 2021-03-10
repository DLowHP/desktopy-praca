#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->firstWindowButton, SIGNAL(clicked()), this, SLOT(onFirstWindowButtonClicked()));
    connect(ui->secondWindowButton, SIGNAL(clicked()), this, SLOT(onSecondWindowButtonClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onFirstWindowButtonClicked()
{

}

void MainWindow::onSecondWindowButtonClicked()
{

}

