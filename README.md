# MQTT: ESP32 Connect <a href="https://www.ohioiot.com"><img src="https://www.ohioiot.com/images/logo.jpg" width="40" ></a>

## Overview
This is the beginning of a library for you to connect your ESP32 to your new MQTT broker (Mosquitto).  The code is explained in the YouTube video [MQTT - ESP32 Connect Using PubSubClient.h](https://www.youtube.com/watch?v=Jgq480yQDJo).


👉 Subscribe to the [OhioIoT YouTube Channel](https://www.youtube.com/@OhioIoT?sub_confirmation=1) for more on "All Things IoT": hardware, firmware, connectivity, cloud computing, and dev toolkit.


## Getting Started

`git clone https://github.com/OhioIoT-MQTT-Examples/ESP32-Connect`


### PlatformIO
- Copy ***lib/credentials/credentials_template*** to ***lib/credentials/credentials.h***, and edit the credentials
- Compile and upload your code


### Arduino IDE
#### Option 1 ####
- Copy all folders in ***lib/*** to your Arduino ***libraries/*** folder
- Copy ***credentials/credentials_template*** to ***credentials/credentials.h***, and edit the credentials
- Create a project folder, and copy ***src/main.cpp*** into that folder with a name that matches, ending in *.ino
- Download PubSubClient.h using the Arduino IDE Library Manager
#### Option 2 ####
- Copy all of the files from the subfolders inside ***lib/*** into the same project folder created above, and keep all of the files, including the *.ino, together

## About
*OhioIoT is an IoT platform designed for small-scale IoT projects (https://www.ohioiot.com).*

