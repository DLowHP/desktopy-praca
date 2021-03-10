#ifndef DLOWHP_H
#define DLOWHP_H

#include <QDialog>

namespace Ui {
class dlowhp;
}

class dlowhp : public QDialog
{
    Q_OBJECT

public:
    explicit dlowhp(QWidget *parent = nullptr);
    ~dlowhp();

private:
    Ui::dlowhp *ui;
};

#endif // DLOWHP_H
