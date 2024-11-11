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

Advanced: soon on https://cults3d.com/en/users/mariusc/3d-models
Expert: soon on https://cults3d.com/en/users/mariusc/3d-models

## Troubleshooting

If you are experiencing issues where the shooting mode (SAFE, SEMI, AUTO) is not being selected or working as expected, try the following:

- **Check the Selector Switch**: Ensure that the firing mode selector switch is properly connected and positioned. If the switch is not making good contact or isn't positioned correctly, the system might not recognize the selected shooting mode. 
  - For example, if the system isn't responding in SEMI or AUTO mode, verify that the selector switch is not stuck in the SAFE position or misaligned.

- **Check Potentiometers**: If the **Dwell** or **Rate of Fire** settings aren't responding, make sure the potentiometers are connected correctly and functioning. Try rotating the potentiometer to confirm it is changing the settings as expected.

- **Tracer Output Issues**: If the tracer output is not behaving as expected, confirm the correct wiring.

If you continue to experience problems, refer to the hardware setup and wiring diagrams to ensure all components are connected correctly.
