#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    add = new Add();
    setWindowTitle("Ацәара");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void show_message(const char* text){
    QMessageBox msgBox;
    msgBox.setWindowTitle("Ацәара");
    msgBox.setText(text);
    msgBox.exec();
};



void MainWindow::on_addButton_clicked(bool checked)
{
    add->show();
}


void MainWindow::on_graphicsButton_clicked(bool checked)
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Ацәара");
    msgBox.setText("В разработке");
    msgBox.exec();
}

