//
// Created by zmake on 24-12-8.
//

#include "HAL.h"

void HAL::Init() {
    Serial.begin(115200);

    HAL::I2C_Init(false);
    HAL::SHT_Init();
    HAL::WIFI_Init();
    HAL::MQTT_Init();
}

void HAL::Update() {
    HAL::WIFI_Update();
    HAL::SHT_Update();
    HAL::MQTT_Update();
}