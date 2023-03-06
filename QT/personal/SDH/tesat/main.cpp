#include <QCoreApplication>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QSerialPort>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Serial port 설정
    QSerialPort serial;
    serial.setPortName("COM3"); // 포트 이름 설정
    serial.setBaudRate(QSerialPort::Baud9600); // 통신 속도 설정
    serial.setDataBits(QSerialPort::Data8); // 데이터 비트 설정
    serial.setParity(QSerialPort::NoParity); // 패리티 비트 설정
    serial.setStopBits(QSerialPort::OneStop); // 정지 비트 설정
    serial.setFlowControl(QSerialPort::NoFlowControl); // 흐름 제어 설정

    // Serial port 열기
    if (!serial.open(QIODevice::ReadWrite)) {
        qDebug() << "Serial port open error!";
        return -1;
    }

    // Serial port로 데이터 송신
    QByteArray data("Hello, World!");
    serial.write(data);

    // Serial port로부터 데이터 수신
    QByteArray receiveData;
    while (serial.waitForReadyRead(1000)) {
        receiveData.append(serial.readAll());
    }
    qDebug() << "Received data:" << receiveData;

    // Serial port 닫기
    serial.close();

    return a.exec();
}
