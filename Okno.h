#ifndef OKNO_H
#define OKNO_H

#include <QDialog>

namespace Ui {
class Okno;
}

class Okno : public QDialog
{
    Q_OBJECT

public:
    explicit Okno(QWidget *parent = nullptr);
    ~Okno();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Okno *ui;
};

#endif // OKNO_H
