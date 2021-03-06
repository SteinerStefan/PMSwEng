// Projekt: Qtcounter, 30.4.2010, ple
// File: counter.cpp

#include <QDebug>
#include "counter.h"

Counter::Counter()
{
    _value = 0;
}

int Counter::value() const
{
    return _value;
}

void Counter::setValue(int value)
{
    if (value != _value)
    {
        _value = value;
        emit valueChanged(_value);
    }
}

void Counter::incValue()
{
    _value++;
    qDebug() << "incremented, new Value= " << _value;
    emit valueChanged(_value);

}
void Counter::decValue()
{
    _value--;
    qDebug() << "decremented, new Value= " << _value;
    emit valueChanged(_value);

}
