#ifndef MENU6_H
#define MENU6_H

#include <QDialog>
#include "menu7.h"
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>


namespace Ui {
class menu6;
}

class menu6 : public QDialog
{
    Q_OBJECT

public:
    explicit menu6(QWidget *parent = nullptr);
    ~menu6();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menu6 *ui;
    menu7 *menu7 ;
};

#endif // MENU6_H
