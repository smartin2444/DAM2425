#ifndef GINY_H
#define GINY_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Giny;
}
QT_END_NAMESPACE

class Giny : public QWidget
{
    Q_OBJECT

public:
    Giny(QWidget *parent = nullptr);
    ~Giny();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Giny *ui;
};
#endif // GINY_H
