# KLib-Sensor

**KLib-Sensor** is a lightweight library for managing sensor values and detecting changes.

## Installation

### Using PlatformIO

Add the following to `platformio.ini`:

```ini
lib_deps = https://github.com/KazaLab/KLib-EnvSensor.git
```

### Usage

```cpp
#include <KLib_Sensor.h>

KLib_Sensor temperatureSensor("temperature");

void setup() {
    Serial.begin(115200);
}

void loop() {
    float newTemperature = random(20, 30); // Simulated temperature value

    if (temperatureSensor.hasChanged(newTemperature, 0.5)) {
        Serial.print("New Temperature: ");
        Serial.println(newTemperature);
        temperatureSensor.updateValue(newTemperature);
    }

    delay(2000);
}
```
