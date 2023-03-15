#ifndef TEXTWITHTIME_H
#define TEXTWITHTIME_H

#include <QString>
#include <QDateTime>>

class TextWithTime
{
public:
    TextWithTime();

    static QString WithTime(QString text);
};

#endif // TEXTWITHTIME_H
