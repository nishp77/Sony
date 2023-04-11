#include <QCoreApplication>
#include "BluetoothDiscovery.h"


int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    auto d = BluetoothDiscovery();
    d.startDeviceDiscovery();

    return QCoreApplication::exec();
}

