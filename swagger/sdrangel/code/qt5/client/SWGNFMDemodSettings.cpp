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


#include "SWGNFMDemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGNFMDemodSettings::SWGNFMDemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNFMDemodSettings::SWGNFMDemodSettings() {
    init();
}

SWGNFMDemodSettings::~SWGNFMDemodSettings() {
    this->cleanup();
}

void
SWGNFMDemodSettings::init() {
    input_frequency_offset = 0L;
    rf_bandwidth = 0.0f;
    af_bandwidth = 0.0f;
    fm_deviation = 0;
    squelch_gate = 0;
    delta_squelch = 0;
    squelch = 0.0f;
    volume = 0.0f;
    ctcss_on = 0;
    audio_mute = 0;
    ctcss_index = 0;
    audio_sample_rate = 0;
    copy_audio_to_udp = 0;
    udp_address = new QString("");
    udp_port = 0;
    rgb_color = 0;
    title = new QString("");
}

void
SWGNFMDemodSettings::cleanup() {
    













    if(udp_address != nullptr) {
        delete udp_address;
    }



    if(title != nullptr) {
        delete title;
    }
}

SWGNFMDemodSettings*
SWGNFMDemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNFMDemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    ::SWGSDRangel::setValue(&af_bandwidth, pJson["afBandwidth"], "float", "");
    ::SWGSDRangel::setValue(&fm_deviation, pJson["fmDeviation"], "qint32", "");
    ::SWGSDRangel::setValue(&squelch_gate, pJson["squelchGate"], "qint32", "");
    ::SWGSDRangel::setValue(&delta_squelch, pJson["deltaSquelch"], "qint32", "");
    ::SWGSDRangel::setValue(&squelch, pJson["squelch"], "float", "");
    ::SWGSDRangel::setValue(&volume, pJson["volume"], "float", "");
    ::SWGSDRangel::setValue(&ctcss_on, pJson["ctcssOn"], "qint32", "");
    ::SWGSDRangel::setValue(&audio_mute, pJson["audioMute"], "qint32", "");
    ::SWGSDRangel::setValue(&ctcss_index, pJson["ctcssIndex"], "qint32", "");
    ::SWGSDRangel::setValue(&audio_sample_rate, pJson["audioSampleRate"], "qint32", "");
    ::SWGSDRangel::setValue(&copy_audio_to_udp, pJson["copyAudioToUDP"], "qint32", "");
    ::SWGSDRangel::setValue(&udp_address, pJson["udpAddress"], "QString", "QString");
    ::SWGSDRangel::setValue(&udp_port, pJson["udpPort"], "qint32", "");
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
}

QString
SWGNFMDemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNFMDemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));

    obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));

    obj->insert("afBandwidth", QJsonValue(af_bandwidth));

    obj->insert("fmDeviation", QJsonValue(fm_deviation));

    obj->insert("squelchGate", QJsonValue(squelch_gate));

    obj->insert("deltaSquelch", QJsonValue(delta_squelch));

    obj->insert("squelch", QJsonValue(squelch));

    obj->insert("volume", QJsonValue(volume));

    obj->insert("ctcssOn", QJsonValue(ctcss_on));

    obj->insert("audioMute", QJsonValue(audio_mute));

    obj->insert("ctcssIndex", QJsonValue(ctcss_index));

    obj->insert("audioSampleRate", QJsonValue(audio_sample_rate));

    obj->insert("copyAudioToUDP", QJsonValue(copy_audio_to_udp));

    toJsonValue(QString("udpAddress"), udp_address, obj, QString("QString"));

    obj->insert("udpPort", QJsonValue(udp_port));

    obj->insert("rgbColor", QJsonValue(rgb_color));

    toJsonValue(QString("title"), title, obj, QString("QString"));

    return obj;
}

qint64
SWGNFMDemodSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGNFMDemodSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
}

float
SWGNFMDemodSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGNFMDemodSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
}

float
SWGNFMDemodSettings::getAfBandwidth() {
    return af_bandwidth;
}
void
SWGNFMDemodSettings::setAfBandwidth(float af_bandwidth) {
    this->af_bandwidth = af_bandwidth;
}

qint32
SWGNFMDemodSettings::getFmDeviation() {
    return fm_deviation;
}
void
SWGNFMDemodSettings::setFmDeviation(qint32 fm_deviation) {
    this->fm_deviation = fm_deviation;
}

qint32
SWGNFMDemodSettings::getSquelchGate() {
    return squelch_gate;
}
void
SWGNFMDemodSettings::setSquelchGate(qint32 squelch_gate) {
    this->squelch_gate = squelch_gate;
}

qint32
SWGNFMDemodSettings::getDeltaSquelch() {
    return delta_squelch;
}
void
SWGNFMDemodSettings::setDeltaSquelch(qint32 delta_squelch) {
    this->delta_squelch = delta_squelch;
}

float
SWGNFMDemodSettings::getSquelch() {
    return squelch;
}
void
SWGNFMDemodSettings::setSquelch(float squelch) {
    this->squelch = squelch;
}

float
SWGNFMDemodSettings::getVolume() {
    return volume;
}
void
SWGNFMDemodSettings::setVolume(float volume) {
    this->volume = volume;
}

qint32
SWGNFMDemodSettings::getCtcssOn() {
    return ctcss_on;
}
void
SWGNFMDemodSettings::setCtcssOn(qint32 ctcss_on) {
    this->ctcss_on = ctcss_on;
}

qint32
SWGNFMDemodSettings::getAudioMute() {
    return audio_mute;
}
void
SWGNFMDemodSettings::setAudioMute(qint32 audio_mute) {
    this->audio_mute = audio_mute;
}

qint32
SWGNFMDemodSettings::getCtcssIndex() {
    return ctcss_index;
}
void
SWGNFMDemodSettings::setCtcssIndex(qint32 ctcss_index) {
    this->ctcss_index = ctcss_index;
}

qint32
SWGNFMDemodSettings::getAudioSampleRate() {
    return audio_sample_rate;
}
void
SWGNFMDemodSettings::setAudioSampleRate(qint32 audio_sample_rate) {
    this->audio_sample_rate = audio_sample_rate;
}

qint32
SWGNFMDemodSettings::getCopyAudioToUdp() {
    return copy_audio_to_udp;
}
void
SWGNFMDemodSettings::setCopyAudioToUdp(qint32 copy_audio_to_udp) {
    this->copy_audio_to_udp = copy_audio_to_udp;
}

QString*
SWGNFMDemodSettings::getUdpAddress() {
    return udp_address;
}
void
SWGNFMDemodSettings::setUdpAddress(QString* udp_address) {
    this->udp_address = udp_address;
}

qint32
SWGNFMDemodSettings::getUdpPort() {
    return udp_port;
}
void
SWGNFMDemodSettings::setUdpPort(qint32 udp_port) {
    this->udp_port = udp_port;
}

qint32
SWGNFMDemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGNFMDemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
}

QString*
SWGNFMDemodSettings::getTitle() {
    return title;
}
void
SWGNFMDemodSettings::setTitle(QString* title) {
    this->title = title;
}


}

