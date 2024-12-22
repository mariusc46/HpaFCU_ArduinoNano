# HPA DIY Controller Features & Configuration

This repository is dedicated to the development of a DIY HPA (High Pressure Air) controller. Below is a breakdown of the features and configurations available in the **Basic**, **Advanced**, and **Expert** versions of the controller.

## Features & Configuration

| **Feature/Version**                                   | **Basic**                           | **Advanced**                       | **Expert**                         |
|-------------------------------------------------------|-------------------------------------|------------------------------------|------------------------------------|
| **Basic Shooting Modes**                              | SAFE / SEMI / AUTO                  | SAFE / SEMI / AUTO                 | SAFE / SEMI / AUTO                 |
| **Dwell Setup**                                       | Yes (via potentiometer)             | Yes (via potentiometer)            | Yes (via WiFi Page)                |
| **Rate of Fire (ROF) Setup**                          | Yes (via potentiometer)             | Yes (via potentiometer)            | Yes (via WiFi Page)                |
| **Tracer Output**                                     | Always On                           | On / Off via Trigger               | On / Off via Trigger + WiFi       |
| **Buzzer Feedback**                                   | Yes                                 | Yes                                | Yes                                |
| **Additional Features in Advanced**                   |                                     |                                    |                                    |
| **Trigger Programming (Binary)**                      |                                     | Yes                                | Yes                                |
| **Trigger Programming (Burst)**                       |                                     | Yes                                | Yes                                |
| **Settings Saved in EEPROM **                         |                                     | Yes                                | Yes                                |
| **Additional Features in Expert**                     |                                     |                                    |                                    |
| **Complete Configuration via WiFi Page**              |                                     |                                    | Yes                                |
| **Configurable Burst Number of Shots**                |                                     |                                    | Yes                                |
| **CQB Mode**                                          |                                     |                                    | Yes                                |
| **Total Number of Shots**                             |                                     |                                    | Yes                                |
| **Temporary Number of Shots (resettable)**            |                                     |                                    | Yes                                |
| **WiFi Hotspot**                                      |                                     |                                    | Yes                                |
| **Eazy Flashable with Tasmotizer**                    |                                     |                                    | Yes                                |
| **Feature Development**                               |                                     |                                    | Yes                                |
| **Price**                                             | Free                                | [Soon on Cults3D](https://cults3d.com/en/3d-model/various/hpa-diy-controller-advanced-version)                  | [Soon on Cults3D](https://cults3d.com/en/3d-model/various/hpa-diy-controller-expert-version)                  |

## Overview

This HPA DIY Controller allows you to customize and control the shooting experience through various modes and settings. Whether you're using the **Basic**, **Advanced**, or **Expert** version, you'll have flexibility with options like rate of fire, tracer output, and advanced configurations, making it ideal for DIY enthusiasts and hobbyists.

### Valve and Power Requirements

This controller is compatible with **12V solenoid valves** such as the one available [here on AliExpress](https://www.aliexpress.com/item/1005004530677382.html?spm=a2g0o.order_list.order_list_main.5.2af15e5bFuXJDw), or any other 12V valve. The controller is powered by an **11.1V LiPo battery**, which should provide enough power for both the controller and the solenoid valve.

Make sure the valve is wired correctly and is rated for 12V operation to ensure proper functionality.

## Installation & Setup

1. Clone this repository to your local machine.
2. Follow the hardware setup instructions for connecting the potentiometers, buzzer, and other components.
3. Connect a **12V solenoid valve** (such as the one linked above or any other compatible 12V valve) to the controller.
4. Power the system with an **11.1V LiPo battery**.
5. Adjust settings such as **Dwell** and **Rate of Fire** based on your desired configuration.

Tracer demo: •	Tracer demo: https://www.youtube.com/shorts/O8T2DLfdGJM 

Here’s an updated and expanded version of your troubleshooting guide:
________________________________________
Troubleshooting Guide
If you are experiencing issues with the shooting mode (SAFE, SEMI, AUTO) not being selected or functioning as expected, please follow these steps:
1.	Check the Selector Switch
o	Ensure that the firing mode selector switch is correctly connected and positioned. If the switch does not make proper contact or is misaligned, the system may fail to recognize the selected shooting mode.
o	Example: If the system isn’t responding in SEMI or AUTO mode, check that the selector switch isn’t stuck in the SAFE position or improperly aligned.
2.	Verify Potentiometers
o	If the Dwell or Rate of Fire settings aren’t adjusting as expected, confirm that the potentiometers are correctly connected and functional. Rotate each potentiometer to verify that it responds to changes.
o	Tip: If there is excessive noise or instability when adjusting the potentiometers, check that all connections are secure and that capacitors are properly installed to help filter noise.
3.	Tracer Output Issues
o	If the tracer output is not functioning as expected, ensure the wiring is correct. Miswiring could lead to unpredictable behavior or failure of the tracer to activate.
4.	Buzzer Not Beeping
o	If the buzzer isn’t sounding when it should, verify its polarity. The positive side of the buzzer should connect to the Arduino. Incorrect polarity will prevent the buzzer from functioning.
5.	Check System Logs
o	For further diagnosis, review the logs outputted from the Fire Control Unit (FCU) via the Arduino IDE. Set the baud rate to 115200 to match the system’s communication rate.
6.	Review Hardware Setup and Wiring Diagrams
o	If issues persist, refer to the hardware setup and wiring diagrams to confirm that all components are correctly connected. Misaligned or improperly connected components can lead to mode selection and functionality issues.
7.	Capacitor and Noise Filtering
o	Ensure that all connections are secure and that capacitors are installed as indicated. Properly positioned capacitors help filter out noise, which is especially important when adjusting potentiometers or experiencing intermittent issues.
By following these steps, you should be able to diagnose and resolve many common issues. For more advanced support, consult your system’s technical manual or reach out to the manufacturer.

