#ifndef MENU_H
#define MENU_H


#include <QMainWindow>
#include "menu2.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class menu; }
QT_END_NAMESPACE

class menu : public QMainWindow
{
    Q_OBJECT

public:
    menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menu *ui;
    menu2 *menu2;
};
#endif // MENU_H
