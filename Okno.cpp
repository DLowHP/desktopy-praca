#include "Okno.h"
#include "ui_Okno.h"

Okno::Okno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno)
{
    ui->setupUi(this);
}

Okno::~Okno()
{
    delete ui;
}

void Okno::on_pushButton_clicked()
{
    ui->label->setText("Hello world!!!");
}
