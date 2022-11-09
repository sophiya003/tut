#include "menu4.h"
#include "ui_menu4.h"

menu4::menu4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu4)
{
    ui->setupUi(this);

    QPixmap pix2("C:/Users/Acer/Desktop/dessert.png");
    ui->label_pic4->setPixmap(pix2);
            QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
                    mydb.setDatabaseName("C:/Users/Acer/Desktop/database/menuu.db");

                    if(!mydb.open())
                        ui->label3->setText("failed to open");
                    else
                        ui->label3->setText("connected");;

}

menu4::~menu4()
{
    delete ui;
}

void menu4::on_pushButton_clicked()
{
    hide();
    menu5 = new  class menu5(this);
    menu5->show();
}

