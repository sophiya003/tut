#ifndef MENU7_H
#define MENU7_H


#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>



namespace Ui {
class menu7;
}

class menu7 : public QDialog
{
    Q_OBJECT

public:
    explicit menu7(QWidget *parent = nullptr);
    ~menu7();

private slots:
    void on_pushButton_view_clicked();

private:
    Ui::menu7 *ui;

};

#endif // MENU7_H
