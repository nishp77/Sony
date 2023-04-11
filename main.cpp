#include <QCoreApplication>
#include <QDebug>
#include <QBluetoothDeviceDiscoveryAgent>


int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    auto *discoveryAgent = new QBluetoothDeviceDiscoveryAgent();
    discoveryAgent->start();

    const QBluetoothDeviceInfo device;

    discoveryAgent->deviceDiscovered(device);

    if(device.name() != "") {
        qDebug() << "Found new device:" << device.name() << '(' << device.address().toString() << ')';
    }

    return QCoreApplication::exec();
}

