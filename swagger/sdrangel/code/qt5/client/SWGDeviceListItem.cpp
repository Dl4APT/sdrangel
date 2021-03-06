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


#include "SWGDeviceListItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDeviceListItem::SWGDeviceListItem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDeviceListItem::SWGDeviceListItem() {
    init();
}

SWGDeviceListItem::~SWGDeviceListItem() {
    this->cleanup();
}

void
SWGDeviceListItem::init() {
    displayed_name = new QString("");
    hw_type = new QString("");
    serial = new QString("");
    sequence = 0;
    tx = 0;
    nb_streams = 0;
    stream_index = 0;
    device_set_index = 0;
    index = 0;
}

void
SWGDeviceListItem::cleanup() {
    
    if(displayed_name != nullptr) {
        delete displayed_name;
    }

    if(hw_type != nullptr) {
        delete hw_type;
    }

    if(serial != nullptr) {
        delete serial;
    }






}

SWGDeviceListItem*
SWGDeviceListItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDeviceListItem::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&displayed_name, pJson["displayedName"], "QString", "QString");
    ::SWGSDRangel::setValue(&hw_type, pJson["hwType"], "QString", "QString");
    ::SWGSDRangel::setValue(&serial, pJson["serial"], "QString", "QString");
    ::SWGSDRangel::setValue(&sequence, pJson["sequence"], "qint32", "");
    ::SWGSDRangel::setValue(&tx, pJson["tx"], "qint32", "");
    ::SWGSDRangel::setValue(&nb_streams, pJson["nbStreams"], "qint32", "");
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    ::SWGSDRangel::setValue(&device_set_index, pJson["deviceSetIndex"], "qint32", "");
    ::SWGSDRangel::setValue(&index, pJson["index"], "qint32", "");
}

QString
SWGDeviceListItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGDeviceListItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("displayedName"), displayed_name, obj, QString("QString"));

    toJsonValue(QString("hwType"), hw_type, obj, QString("QString"));

    toJsonValue(QString("serial"), serial, obj, QString("QString"));

    obj->insert("sequence", QJsonValue(sequence));

    obj->insert("tx", QJsonValue(tx));

    obj->insert("nbStreams", QJsonValue(nb_streams));

    obj->insert("streamIndex", QJsonValue(stream_index));

    obj->insert("deviceSetIndex", QJsonValue(device_set_index));

    obj->insert("index", QJsonValue(index));

    return obj;
}

QString*
SWGDeviceListItem::getDisplayedName() {
    return displayed_name;
}
void
SWGDeviceListItem::setDisplayedName(QString* displayed_name) {
    this->displayed_name = displayed_name;
}

QString*
SWGDeviceListItem::getHwType() {
    return hw_type;
}
void
SWGDeviceListItem::setHwType(QString* hw_type) {
    this->hw_type = hw_type;
}

QString*
SWGDeviceListItem::getSerial() {
    return serial;
}
void
SWGDeviceListItem::setSerial(QString* serial) {
    this->serial = serial;
}

qint32
SWGDeviceListItem::getSequence() {
    return sequence;
}
void
SWGDeviceListItem::setSequence(qint32 sequence) {
    this->sequence = sequence;
}

qint32
SWGDeviceListItem::getTx() {
    return tx;
}
void
SWGDeviceListItem::setTx(qint32 tx) {
    this->tx = tx;
}

qint32
SWGDeviceListItem::getNbStreams() {
    return nb_streams;
}
void
SWGDeviceListItem::setNbStreams(qint32 nb_streams) {
    this->nb_streams = nb_streams;
}

qint32
SWGDeviceListItem::getStreamIndex() {
    return stream_index;
}
void
SWGDeviceListItem::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
}

qint32
SWGDeviceListItem::getDeviceSetIndex() {
    return device_set_index;
}
void
SWGDeviceListItem::setDeviceSetIndex(qint32 device_set_index) {
    this->device_set_index = device_set_index;
}

qint32
SWGDeviceListItem::getIndex() {
    return index;
}
void
SWGDeviceListItem::setIndex(qint32 index) {
    this->index = index;
}


}

