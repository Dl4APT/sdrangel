/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGInstanceDevicesResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGInstanceDevicesResponse::SWGInstanceDevicesResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInstanceDevicesResponse::SWGInstanceDevicesResponse() {
    init();
}

SWGInstanceDevicesResponse::~SWGInstanceDevicesResponse() {
    this->cleanup();
}

void
SWGInstanceDevicesResponse::init() {
    devicecount = 0;
    devices = new QList<SWGDeviceListItem*>();
}

void
SWGInstanceDevicesResponse::cleanup() {
    

    if(devices != nullptr) {
        QList<SWGDeviceListItem*>* arr = devices;
        foreach(SWGDeviceListItem* o, *arr) {
            delete o;
        }
        delete devices;
    }
}

SWGInstanceDevicesResponse*
SWGInstanceDevicesResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInstanceDevicesResponse::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&devicecount, pJson["devicecount"], "qint32", "");
    
    ::SWGSDRangel::setValue(&devices, pJson["devices"], "QList", "SWGDeviceListItem");
    
}

QString
SWGInstanceDevicesResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInstanceDevicesResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("devicecount", QJsonValue(devicecount));

    QJsonArray devicesJsonArray;
    toJsonArray((QList<void*>*)devices, &devicesJsonArray, "devices", "SWGDeviceListItem");
    obj->insert("devices", devicesJsonArray);

    return obj;
}

qint32
SWGInstanceDevicesResponse::getDevicecount() {
    return devicecount;
}
void
SWGInstanceDevicesResponse::setDevicecount(qint32 devicecount) {
    this->devicecount = devicecount;
}

QList<SWGDeviceListItem*>*
SWGInstanceDevicesResponse::getDevices() {
    return devices;
}
void
SWGInstanceDevicesResponse::setDevices(QList<SWGDeviceListItem*>* devices) {
    this->devices = devices;
}


}

