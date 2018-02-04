
#include "DgpsPluginAPI.h"

DgpsWrapper* CreateDgpsObject(const char* portName, int baudRate) {
    return new DgpsWrapper(portName, baudRate);
}

void DeleteDgpsObject(DgpsWrapper* pObj) {delete pObj;}

void RunDgps(DgpsWrapper* pObj) { pObj->Run(); }

void SendDgpsData(DgpsWrapper* pObj) { pObj->SetData(); }

void SetPosition(DgpsWrapper* pObj, double latitude, double longitude, double altitude) {
    pObj->SetPosition(latitude, longitude, altitude);
}

void SetVelocities(DgpsWrapper* pObj, double latSpeed, double longSpeed, double altAzimuth) {
    pObj->SetVelocities(latSpeed, longSpeed, altAzimuth);
}

void SetDgpsTimeStamp(DgpsWrapper* pObj, int timeStamp) {
    pObj->SetTimeStamp(timeStamp);
}