#include <esp_log.h>
#include <unity.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"


void run_test(void) {
    int test = 1;
    int expected = 1;
    TEST_ASSERT_EQUAL(test,expected);
}

void app_main(void){
    UNITY_BEGIN();
    RUN_TEST(run_test);
    UNITY_END();
}