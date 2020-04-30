#ifndef CALCULATED_H
#define CALCULATED_H

#include <QDialog>

namespace Ui {
class calculated;
}

class calculated : public QDialog
{
    Q_OBJECT

public:
    explicit calculated(QWidget *parent = nullptr);
    ~calculated();
    void setText(QString p, QString s);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::calculated *ui;
};

#endif // CALCULATED_H
