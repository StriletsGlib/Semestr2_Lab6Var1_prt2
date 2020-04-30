#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calculated.h"
#include "ui_calculated.h"
#include <tgmath.h>
#include <string>
#include <iostream>
#include <sstream>
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


void MainWindow::on_pushButton_2_clicked()
{
    QString sa, sb, sc;
    sa =ui->textEdit_a->toPlainText();
    sb =ui->textEdit_b->toPlainText();
    sc =ui->textEdit_c->toPlainText();
    if(testForInt(sa)&testForInt(sb)&testForInt(sc)){
    calculated *window = new calculated(this);
    window->show();
    double a = sa.toDouble();
    double b = sb.toDouble();
    double c = sc.toDouble();
    double p = a+b+c;
    double d = (a+b+c)/2;
    double s = sqrt(d*(d-a)*(d-b)*(d-c));
    std::stringstream conv;
    conv<<p<<" "<<s;
    std::string c1, c2;
    conv>>c1>>c2;
    QString sd = sd.fromStdString(c1);
    QString ss = ss.fromStdString(c2);
    window->setText(sd,ss);
    }
}
bool testForInt(std::string t){
    bool r = true;
    for (int i = 0; i<t.length(); i++){
        if ((t[i]>'9') or (t[i] <'0')) r = false;
    }
    return r;
}
bool testForInt(QString t){
    return testForInt(t.toStdString());
};

void MainWindow::on_pushButton_clicked()
{
    close();
}
