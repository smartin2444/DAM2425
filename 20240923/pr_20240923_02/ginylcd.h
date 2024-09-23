#ifndef GINYLCD_H
#define GINYLCD_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class GinyLCD;
}
QT_END_NAMESPACE

class GinyLCD : public QWidget
{
    Q_OBJECT

public:
    GinyLCD(QWidget *parent = nullptr);
    ~GinyLCD();

public slots:
    void setLcdValueSignal(int);

private:
    Ui::GinyLCD *ui;
};
#endif // GINYLCD_H
