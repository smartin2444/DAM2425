#ifndef GINY01_H
#define GINY01_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Giny01;
}
QT_END_NAMESPACE

class Giny01 : public QWidget
{
    Q_OBJECT

public:
    Giny01(QWidget *parent = nullptr);
    ~Giny01();

public slots:
    void vOnSliderChange(int);

private:
    Ui::Giny01 *ui;
};
#endif // GINY01_H
