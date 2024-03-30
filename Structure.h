#ifndef STRUCTURE_H
#define STRUCTURE_H

#include <QDateTime>
#include <QDataStream>

typedef struct{
    QDate date; // date
    QTime sleep; // time
    int goal; // percent
    int deep_phase; // percent
    int heart_rate; // rate per minute
    int noise; // decibels
} Sleep;

#endif // STRUCTURE_H
