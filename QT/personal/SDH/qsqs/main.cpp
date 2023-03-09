#include <QCoreApplication>
#include <QDebug>
#include <QSerialPort>
#include <QSerialPortInfo>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Number of serial ports:" << QSerialPortInfo::availablePorts().count();

    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {

        qDebug() << "\nPort:" << serialPortInfo.portName();
        qDebug() << "Location:" << serialPortInfo.systemLocation();
        qDebug() << "Description:" << serialPortInfo.description();
        qDebug() << "Manufacturer:" << serialPortInfo.manufacturer();

        qDebug() << "Vendor Identifier:" << (
            serialPortInfo.hasVendorIdentifier() ?
            QByteArray::number(serialPortInfo.vendorIdentifier(), 16) :
            QByteArray());

        qDebug() << "Product Identifier:" << (
            serialPortInfo.hasProductIdentifier() ?
            QByteArray::number(serialPortInfo.productIdentifier(), 16) :
            QByteArray());


        qDebug() << "Busy:" << (serialPortInfo.isBusy() ? QObject::tr("Yes") : QObject::tr("No"));

        QSerialPort *port = new QSerialPort(serialPortInfo);
        if (port->open(QIODevice::ReadWrite)) {
            qDebug() << "Baud rate:" << port->baudRate();
            qDebug() << "Data bits:" << port->dataBits();
            qDebug() << "Stop bits:" << port->stopBits();
            qDebug() << "Parity:" << port->parity();
            qDebug() << "Flow control:" << port->flowControl();
            qDebug() << "Read buffer size:" << port->readBufferSize();
            port->close();
        } else {
            qDebug() << "Unable to open port, error code" << port->error();
        }
        delete port;
    }

    return 0;
}
