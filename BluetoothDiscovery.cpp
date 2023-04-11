//
// Created by joker on 4/11/23.
//

#include "BluetoothDiscovery.h"

void BluetoothDiscovery::startDeviceDiscovery() {
    auto *discoveryAgent = new QBluetoothDeviceDiscoveryAgent();
    connect(discoveryAgent, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)), this, SLOT(deviceDiscovered(QBluetoothDeviceInfo)));

    discoveryAgent->start();
}

void BluetoothDiscovery::deviceDiscovered(const QBluetoothDeviceInfo &device) {
    qDebug() << "Found new device: " << device.name() << '(' << device.address().toString() << ')';
}
