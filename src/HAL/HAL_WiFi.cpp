//
// Created by zmake on 24-12-8.
//
#include "WiFi.h"
#include "HAL/HAL.h"

void HAL::WIFI_Init(){
    Serial.print("Connecting to ");
    Serial.println(CONFIG_WIFI_SSID);
    WiFi.begin(CONFIG_WIFI_SSID, CONFIG_WIFI_PASSWORD);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}

void HAL::WIFI_Update() {
    // put your main code here, to run repeatedly:
    if (WiFi.status() != WL_CONNECTED)
    {
//        Serial.println("WiFi not connected");
        HAL::WIFI_Init();
    }
    else
    {
//        Serial.println("WiFi connected");
    }
}
