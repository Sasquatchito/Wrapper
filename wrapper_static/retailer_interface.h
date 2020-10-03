#ifndef RETAILER_H
#define RETAILER_H

#include <QtCore>
#include <QJsonObject>
#include <QtPlugin>

class retailer_interface{

public:
    QJsonObject virtual check_availability();
};

#define retailer_interface_iid "org.qt-project.Qt.Examples.retailer_interface"
Q_DECLARE_INTERFACE(retailer_interface, retailer_interface_iid)
#endif // RETAILER_H
