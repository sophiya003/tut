#ifndef MENU2_H
#define MENU2_H

#include <QDialog>
#include "menu3.h"
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>


namespace Ui {
class menu2;
}

class menu2 : public QDialog
{
    Q_OBJECT

public:
    explicit menu2(QWidget *parent = nullptr);
    ~menu2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menu2 *ui;
    menu3 *menu3;
};

#endif // MENU2_H
