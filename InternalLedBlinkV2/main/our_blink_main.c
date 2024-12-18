#include <esp_log.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

static const char* TAG = "example";
#define BLINK_GPIO CONFIG_BLINK_GPIO

void app_main(void){
    esp_rom_gpio_pad_select_gpio(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
    ESP_LOGW(TAG, "Test Run!");
    int level = 1;
    while(1){
        if (level == 1)
            level =0;
        else
            level = 1;

        gpio_set_level(BLINK_GPIO, level);
        vTaskDelay(1000/ portTICK_PERIOD_MS);
    }
}