#include "dlowhp.h"
#include "ui_dlowhp.h"

dlowhp::dlowhp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlowhp)
{
    ui->setupUi(this);
    QPixmap logo("://img/dlowhp-round.png");
    this->ui->logo->setPixmap(logo);
}

dlowhp::~dlowhp()
{
    delete ui;
}
