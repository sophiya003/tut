#include "menu2.h"
#include "ui_menu2.h"


menu2::menu2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu2)
{
    ui->setupUi(this);
    QPixmap pix1("C:/Users/Acer/Desktop/mainn.png");
    ui->label_pic1->setPixmap(pix1);
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
            mydb.setDatabaseName("C:/Users/Acer/Desktop/database/menuu.db");

            if(!mydb.open())
                ui->label1->setText("failed to open");
            else
                ui->label1->setText("connected");
}

menu2::~menu2()
{
    delete ui;
}

void menu2::on_pushButton_clicked()
{
    hide();
    menu3 = new  class menu3(this);
    menu3->show();

}

