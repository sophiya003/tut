#ifndef MENU4_H
#define MENU4_H

#include <QDialog>
#include "menu5.h"
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>


namespace Ui {
class menu4;
}

class menu4 : public QDialog
{
    Q_OBJECT

public:
    explicit menu4(QWidget *parent = nullptr);
    ~menu4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menu4 *ui;
    menu5 *menu5;
};

#endif // MENU4_H
