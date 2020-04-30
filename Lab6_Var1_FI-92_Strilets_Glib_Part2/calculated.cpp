#include "calculated.h"
#include "ui_calculated.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
calculated::calculated(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calculated)
{
    ui->setupUi(this);
}

calculated::~calculated()
{
    delete ui;
}

void calculated::setText(QString p, QString s){
    ui->label->setText("Perimiter = "+p);
    ui->label_2->setText("Plosha = "+s);
};

void calculated::on_pushButton_clicked()
{
    close();
}

void calculated::on_pushButton_2_clicked()
{
    close();
}
