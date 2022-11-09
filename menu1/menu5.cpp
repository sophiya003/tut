#include "menu5.h"
#include "ui_menu5.h"

menu5::menu5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu5)
{
    ui->setupUi(this);
    QPixmap pix4("C:/Users/Acer/Desktop/mocktailss.png");
    ui->label_pic5->setPixmap(pix4);
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
            mydb.setDatabaseName("C:/Users/Acer/Desktop/database/menuu.db");

            if(!mydb.open())
                ui->label4->setText("failed to open");
            else
                ui->label4->setText("connected");;

}

menu5::~menu5()
{
    delete ui;
}

void menu5::on_pushButton_clicked()
{
    hide();
    menu6 = new  class menu6(this);
    menu6->show();
}

