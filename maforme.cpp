#include "maforme.h"
#include "ui_maforme.h"

maforme::maforme(QWidget *parent) :
    QWidget(parent), ui(new Ui::maforme)
{
    ui->setupUi(this);
}

maforme::~maforme()
{
    delete ui;
}

void maforme::on_ChoixNon_clicked()
{
    this->close();
}


void maforme::on_ChoixOui_clicked()
{
    qApp->quit();
}

