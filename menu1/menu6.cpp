#include "menu6.h"
#include "ui_menu6.h"

menu6::menu6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu6)
{
    ui->setupUi(this);
    QPixmap pix5("C:/Users/Acer/Desktop/mo.png");
    ui->label_pic6->setPixmap(pix5);
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
            mydb.setDatabaseName("C:/Users/Acer/Desktop/database/menuu.db");

            if(!mydb.open())
                ui->label5->setText("failed to open");
            else
                ui->label5->setText("connected");

}

menu6::~menu6()
{
    delete ui;
}

void menu6::on_pushButton_clicked()
{
    hide();
    menu7 = new  class menu7(this);
    menu7->show();
}

