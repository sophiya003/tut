#include "menu3.h"
#include "ui_menu3.h"



menu3::menu3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu3)
{
    ui->setupUi(this);
    QPixmap pix2("C:/Users/Acer/Desktop/main22.png");
    ui->label_pic3->setPixmap(pix2);
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
            mydb.setDatabaseName("C:/Users/Acer/Desktop/database/menuu.db");

            if(!mydb.open())
                ui->label2->setText("failed to open");
            else
                ui->label2->setText("connected");

}

menu3::~menu3()
{
    delete ui;
}

void menu3::on_pushButton_clicked()
{
    hide();
    menu4 = new  class menu4(this);
    menu4->show();
}

