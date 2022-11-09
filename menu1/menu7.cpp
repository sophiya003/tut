#include "menu7.h"
#include "ui_menu7.h"

menu7::menu7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu7)
{
    ui->setupUi(this);
    QPixmap pix6("C:/Users/Acer/Desktop/weee.png");
    ui->label_pic7->setPixmap(pix6);
            QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
                    mydb.setDatabaseName("C:/Users/Acer/Desktop/database/menuu.db");

                    if(!mydb.open())
                        ui->label6->setText("failed to open");
                    else
                        ui->label6->setText("connected");
            ;
}

menu7::~menu7()
{
    delete ui;
}


void menu7::on_pushButton_view_clicked()
{

}


