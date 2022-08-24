//#define LOG_LOCAL_LEVEL ESP_LOG_VERBOSE

#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "driver/gpio.h"
#include <dht.h>

#include "dht.h"
#include "tasks_common.h"

// == global defines =============================================

static const char* TAG = "DHT";

float temperature, humidity;

float getHumidity() { return humidity; }
float getTemperature() { return temperature; }



/**
 * DHT11 Sensor task
 */
static void DHT11_task(void *pvParameter)
{

	printf("Starting DHT task\n\n");
#ifdef CONFIG_EXAMPLE_INTERNAL_PULLUP
	gpio_set_pull_mode(DHT_GPIO, GPIO_PULLUP_ONLY);
#endif

	for (;;)
	{
		printf("=== Reading DHT ===\n");

		printf("Humidity: %.1f%% Temp: %.1fC\n", getHumidity(), getTemperature());


		vTaskDelay(4000 / portTICK_RATE_MS);
	}
}

void DHT11_task_start(void)
{
	xTaskCreatePinnedToCore(&DHT11_task, "DHT11_task", DHT11_TASK_STACK_SIZE, NULL, DHT11_TASK_PRIORITY, NULL, DHT11_TASK_CORE_ID);
}
