#ifndef MATRIOSCA_H
#define MATRIOSCA_H

#include "giny01.h"
#include "ginylcd.h"

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Matriosca;
}
QT_END_NAMESPACE

class Matriosca : public QWidget
{
    Q_OBJECT

public:
    Matriosca(QWidget *parent = nullptr);
    ~Matriosca();

private:
    Ui::Matriosca *ui;
};
#endif // MATRIOSCA_H
