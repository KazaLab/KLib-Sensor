#include "KLib_Sensor.h"


KLib_Sensor::KLib_Sensor() : id(""), previousStringValue(""), previousValue(0) {}
KLib_Sensor::KLib_Sensor(const std::string& id) : id(id), previousStringValue(""), previousValue(0) {}

std::string KLib_Sensor::getId() const {
    return id;
}

std::string KLib_Sensor::getPreviousStringValue() const {
    return previousStringValue;
}
int KLib_Sensor::getPreviousIntValue() const {
    return previousIntValue;
}
float KLib_Sensor::getPreviousValue() const {
    return previousValue;
}

bool KLib_Sensor::hasChanged(const std::string& currentValue) const {
    return currentValue != previousStringValue;
}
bool KLib_Sensor::hasChanged(int currentValue, int diff) const {
    return (std::abs(currentValue - previousValue) > diff);
    /*
    if (currentValue != previousValue) {
        if (currentValue > previousValue + diff or currentValue < previousValue - diff) {
            return true;
        }
    }
    return false;
    */
}
bool KLib_Sensor::hasChanged(float currentValue, float diff) const {
    return (std::abs(currentValue - previousValue) > diff);
}

void KLib_Sensor::updateValue(const std::string& currentValue) {
    previousStringValue = currentValue;
}
void KLib_Sensor::updateValue(int currentValue) {
    previousValue = currentValue;
}
void KLib_Sensor::updateValue(float currentValue) {
    previousValue = currentValue;
}
