#include "textwithtime.h"

TextWithTime::TextWithTime() {}

QString TextWithTime::WithTime(QString text) {
    QString time = "[" + QDateTime::currentDateTime().toString(Qt::ISODate) + "]";
    return time.append(text);
}
