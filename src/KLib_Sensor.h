#ifndef KLIB_SENSOR_H
#define KLIB_SENSOR_H

#include <string>


class KLib_Sensor {
private:
    std::string id;
    std::string previousStringValue;
    int previousIntValue;
    float previousValue;

public:
    KLib_Sensor();
    explicit KLib_Sensor(const std::string& id);

    std::string getId() const;
    std::string getPreviousStringValue() const;
    int getPreviousIntValue() const;
    float getPreviousValue() const;
    bool hasChanged(const std::string& currentValue) const;
    bool hasChanged(int currentValue, int diff) const;
    bool hasChanged(float currentValue, float diff) const;
    void updateValue(const std::string& currentValue);
    void updateValue(int currentValue);
    void updateValue(float currentValue);
};

#endif
