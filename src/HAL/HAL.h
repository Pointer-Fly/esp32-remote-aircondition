//
// Created by zmake on 24-12-8.
//

#ifndef DEMO_HAL_H
#define DEMO_HAL_H

#include <Arduino.h>
#include "CommonMacro.h"
#include "App/Configs/Config.h"
#include "HAL_Def.h"
//#include "FreeRTOS.h" //Don't need this

namespace HAL {
    void Init();
    void Update();

/*I2C*/
    void I2C_Init(bool startScan);

/* SHT */
    void SHT_Init();
    void SHT_Update();

/* WIFI */
    void WIFI_Init();
    void WIFI_Update();

/*MQTT*/
void MQTT_Init();
void MQTT_Update();

} // HAL

#endif //DEMO_HAL_H
