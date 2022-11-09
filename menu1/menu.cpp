#include "menu.h"
#include "ui_menu.h"


menu::menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/Acer/Desktop/weeee.png");
    ui->label_pic->setPixmap(pix);
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
            mydb.setDatabaseName("C:/Users/Acer/Desktop/database/menuu.db");

            if(!mydb.open())
                ui->label->setText("failed to open");
            else
                ui->label->setText("connected");

}

menu::~menu()
{
    delete ui;
}


void menu::on_pushButton_clicked()
{
  hide();
  menu2 = new  class menu2(this);
  menu2->show();
}

