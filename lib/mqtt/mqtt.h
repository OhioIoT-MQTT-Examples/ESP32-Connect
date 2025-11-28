#pragma once

#include <WiFiClient.h>
#include <PubSubClient.h>

#define RETRY_INTERVAL 3000

class Mqtt {

	public:

		Mqtt();

		void enable_logging();
		void setup(const char *, int);
		void maintain();

		bool is_connected = false;

	private:

		WiFiClient _wifi_client;
		PubSubClient _mqtt_client;

		void _log_status();

		unsigned long _retry_timer;
		bool _is_first = true;
		bool _echo = false;

};

extern Mqtt mqtt;