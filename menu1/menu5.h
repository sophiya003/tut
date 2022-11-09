#ifndef MENU5_H
#define MENU5_H

#include <QDialog>
#include "menu6.h"
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>


namespace Ui {
class menu5;
}

class menu5 : public QDialog
{
    Q_OBJECT

public:
    explicit menu5(QWidget *parent = nullptr);
    ~menu5();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menu5 *ui;
    menu6 *menu6;
};

#endif // MENU5_H
