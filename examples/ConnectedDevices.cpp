//
// Created by joker on 4/10/23.
//

#include <QBluetoothLocalDevice>

int main(int argc, char *argv[]) {

    QBluetoothLocalDevice localDevice;
    QString localDeviceName;

    if(localDevice.isValid()) {
        localDeviceName = localDevice.name();
        qDebug() << "My Device: " + localDeviceName;

        localDevice.setHostMode(QBluetoothLocalDevice::HostDiscoverableLimitedInquiry);

        QList<QBluetoothAddress> remotes;
        remotes = localDevice.connectedDevices();


        QBluetoothAddress bluetoothAddress;
        foreach( bluetoothAddress, remotes){
                qDebug() << bluetoothAddress;
        }

    }

}
