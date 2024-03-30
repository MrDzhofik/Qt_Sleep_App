#include "add.h"
#include "ui_add.h"
#include "Structure.h"
#include "mainwindow.h"
#include <QFile>
#include <QDataStream>

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
    setWindowTitle("Ацәара");
}

Add::~Add()
{
    delete ui;
}


QDataStream & operator << ( QDataStream & out, const Sleep & s )
{
  out << s.date;
  out << s.sleep;
  out << s.goal;
  out << s.deep_phase;
  out << s.heart_rate;
  out << s.noise;
  return out;
}


void Add::on_addButton_clicked(bool checked) {
    Sleep r;
    QFile fil("/home/mrdzhofik/Qt/sleep_analyzer/Sleep.dat");
    fil.open(QFile::Append);

    r.date = ui->dateEdit->date();
    r.sleep = ui->timeEdit->time();
    r.goal = ui->goalEdit->text().toInt();
    r.deep_phase = ui->phaseEdit->text().toInt();
    r.heart_rate = ui->rateEdit->text().toInt();
    r.noise = ui->noiseEdit->text().toInt();
    ui->dateEdit->clear();
    ui->timeEdit->clear();
    ui->goalEdit->clear();
    ui->phaseEdit->clear();
    ui->rateEdit->clear();
    ui->noiseEdit->clear();
    qDebug("Norm");
    QDataStream out(&fil);
    out << r.date;
    out << r.sleep;
    out << r.goal;
    out << r.deep_phase;
    out << r.heart_rate;
    out << r.noise;
    fil.close();
    show_message("Исыҩит");
    ui->dateEdit->setFocus();
}

void Add::on_exitButton_clicked(bool checked)
{
    qDebug("Close");
    close();
}
