//
// Created by joker on 4/11/23.
//

#ifndef SONY_BLUETOOTHDISCOVERY_H
#define SONY_BLUETOOTHDISCOVERY_H


#include <QBluetoothDeviceInfo>
#include <QBluetoothDeviceDiscoveryAgent>

class BluetoothDiscovery : public QObject{
    Q_OBJECT
public:
    void startDeviceDiscovery();

public slots:
    static void deviceDiscovered(const QBluetoothDeviceInfo &device);
};


#endif //SONY_BLUETOOTHDISCOVERY_H
