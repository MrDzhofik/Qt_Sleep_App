#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include "add.h"
#include "Structure.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Add;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool readrec();
    Sleep record;
    Add *add;

private slots:
    void on_addButton_clicked(bool checked);

    void on_graphicsButton_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};




void show_message(const char* text);


#endif // MAINWINDOW_H
