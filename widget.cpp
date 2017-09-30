#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->start_pushButton,SIGNAL(clicked(bool)),this,SLOT(on_Start_cl()));
    connect(ui->stop_pushButton,SIGNAL(clicked(bool)),this,SLOT(on_Stop_cl()));
    connect(ui->reboot_pushButton,SIGNAL(clicked(bool)),this,SLOT(on_Reboot_cl()));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_Start_cl()
{

}

void Widget::on_Stop_cl()
{

}

void Widget::on_Reboot_cl()
{

}
