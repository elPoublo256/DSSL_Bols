#ifndef WIDGET_H
#define WIDGET_H
#include <gl_boals.h>
#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
private slots:
void on_Start_cl();
void on_Stop_cl();
void on_Reboot_cl();

};

#endif // WIDGET_H
