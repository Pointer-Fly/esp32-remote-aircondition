//
// Created by zmake on 24-12-8.
//
#include "HAL/HAL.h"
#include "SHTSensor.h"

static SHTSensor sht(SHTSensor::SHT2X);
HAL::SHT_Info_t sht_info;

void HAL::SHT_Init() {
    if (!sht.init()) {
        Serial.print("SHT init failed\n");
    }
}

void HAL::SHT_Update() {

    if (sht.readSample()) {
//        Serial.print("SHT:\n");
//        Serial.print("  RH: ");
//        Serial.print(sht.getHumidity(), 2);
//        Serial.print("\n");
//        Serial.print("  T:  ");
//        Serial.print(sht.getTemperature(), 2);
//        Serial.print("\n");

        sht_info.humi = sht.getHumidity();
        sht_info.temp = sht.getTemperature();
    } else {
        Serial.print("Error in readSample()\n");
    }
}