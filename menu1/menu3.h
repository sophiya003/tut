#ifndef MENU3_H
#define MENU3_H

#include <QDialog>
#include "menu4.h"
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>


namespace Ui {
class menu3;
}

class menu3 : public QDialog
{
    Q_OBJECT

public:
    explicit menu3(QWidget *parent = nullptr);
    ~menu3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menu3 *ui;
    menu4 *menu4;
};

#endif // MENU3_H
