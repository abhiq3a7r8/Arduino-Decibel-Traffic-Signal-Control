# Decibel-Triggered Traffic Signal Control System using Arduino

![Arduino Logo](https://upload.wikimedia.org/wikipedia/commons/8/87/Arduino_Logo.svg)




This Arduino project controls a traffic signal based on a set timer. The signal changes from green to yellow to red, and a buzzer activates when the timer reaches certain intervals. Additionally, there's a reset button that can be used to restart the timer. The code also includes a display to show the remaining time in seconds.

## Requirements

- Arduino board
- TM1637 4-Digit LED Display
- Sound Sensor
- LEDs (Yellow and Red)
- Buzzer
- Button (for reset, replace with sound sensor as mentioned)

## Setup

1. Connect the TM1637 display, sound sensor, LEDs, and buzzer as per the provided code.
2. Upload the code to your Arduino board using the Arduino IDE.
3. Replace the button with a sound sensor by connecting it properly.

## Instructions

- The code initializes with a 60-second timer countdown displayed on the TM1637 display.
- Press the button (or trigger the sound sensor) to reset the timer and start the countdown again.
- The LEDs will activate as the timer reaches certain intervals.
- The display will show the remaining seconds, and the timer will continue to count down.

## Note

Replace the button in the circuit with a sound sensor for the intended functionality. Adjust the threshold in the code accordingly to trigger the reset action based on sound levels.
![Sound Sensor](https://www.google.com/url?sa=i&url=https%3A%2F%2Fdiyi0t.com%2Fsound-sensor-arduino-esp8266-esp32%2F&psig=AOvVaw2oYkUGVIsXoJ0ceKFd0cPj&ust=1691588702576000&source=images&cd=vfe&opi=89978449&ved=0CBEQjRxqFwoTCLjF84-ZzYADFQAAAAAdAAAAABAE)

## Project's Practical Utility

### Enhancing Traffic Safety and Efficiency

In our bustling urban lives, efficient traffic management and safety are paramount. The "Decibel-Triggered Traffic Signal Control System using Arduino" project offers a novel solution that addresses both these concerns. By incorporating sound sensor technology and real-time signal adjustments, this project offers tangible benefits to daily commuters and pedestrians.

### Key Benefits:

#### 1. Safer Intersections

With the ability to reset the traffic signal timer based on ambient noise levels, this system provides an added layer of safety. In scenarios where unexpected sounds suggest potential hazards, the signal's red phase can be extended, allowing vehicles to safely come to a stop.

#### 2. Minimized Congestion

The dynamic adjustment of signal timing can help mitigate traffic congestion during peak hours. By ensuring that intersections respond intelligently to varying noise patterns, the system helps maintain a smoother flow of vehicles, reducing idling times and unnecessary stops.

#### 3. Quick Recovery from Interruptions

In instances of minor accidents or roadblocks, the signal system's adaptive response can aid in swiftly restoring regular traffic flow. By resetting the signal timer based on user-defined thresholds, the system helps reduce delays caused by unexpected events.

#### 4. Energy Efficiency

The precise timing adjustments offered by this project contribute to energy conservation. The system's ability to intelligently extend or reduce signal phases reduces the overall energy consumption of traffic management systems, contributing positively to environmental sustainability.

### Real-World Scenarios:

- Imagine a bustling urban intersection during heavy rainfall, where visibility is reduced. The project's dynamic timer adjustment ensures that vehicles have sufficient time to navigate safely, reducing the likelihood of accidents.

- During emergencies or medical situations, the system's ability to adapt can help facilitate the quick movement of emergency vehicles, ensuring that they encounter minimal delays.

The "Decibel-Triggered Traffic Signal Control System using Arduino" project resonates with our day-to-day experiences, offering a practical solution to common traffic management challenges. Its ability to adapt to real-time noise levels ensures a safer and more efficient traffic ecosystem for everyone.


## Project Simulation on wowki.com

Experience the dynamic functionality of this project through an interactive simulation hosted on Wowki. The simulation provides a hands-on virtual environment where you can explore the project's features and see its real-time impact.

![Wokwi](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.makerzine.com.br%2Feducacao%2Fwokwi-simulador-de-circuitos-eletronicos-open-source-para-makers%2F&psig=AOvVaw3tkGtTYN-BMeaUg0Iy1OLD&ust=1691589162430000&source=images&cd=vfe&opi=89978449&ved=0CBEQjRxqFwoTCIjKquuazYADFQAAAAAdAAAAABAY)


### How to Access:

Visit [Wokwi simulation link](https://wokwi.com/projects/353913754253943809) to access the project simulation. Dive into an engaging experience that showcases the project's functionality and its potential benefits in real-world traffic scenarios.


