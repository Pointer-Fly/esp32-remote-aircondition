//
// Created by zmake on 24-12-8.
//

#ifndef DEMO_CONFIG_H
#define DEMO_CONFIG_H

/* I2C */
#define CONFIG_MCU_SDA_PIN          21
#define CONFIG_MCU_SCL_PIN          22

/* WiFi */
#define CONFIG_WIFI_SSID            "8952B0"
#define CONFIG_WIFI_PASSWORD        "12345677"
/* MQTT */
#define CONFIG_MQTT_SERVER          "124.222.71.199"
#define CONFIG_MQTT_PORT            1883
#define CONFIG_MQTT_DEVICE_ID       "esp-ac"
#define CONFIG_MQTT_SUB_TOPIC           "ac/esp-ac/data/sub"
#define CONFIG_MQTT_PUB_TOPIC           "ac/esp-ac/data/pub"
/* IR */
#define CONFIG_IRLED_PIN            15


#endif //DEMO_CONFIG_H
