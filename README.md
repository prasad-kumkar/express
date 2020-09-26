![](https://github.com/prasad-kumkar/express/blob/master/assets/pixil-frame-0-3.png)
## Inspiration
Nearly everyone faces hardships and difficulties at one time or another. But for people with disabilities, barriers can be more frequent and have greater impact.
I got the inspiration from the device Stephen Hawkins had to use to communicate when he was diagnosed with motor neurone disease. He was able to move only one finger and he had to tap on a key to form words which were then spelled through a screen and speaker. 
<br>
<br>
![Image](https://media.wired.com/photos/593294964dc9b45ccec5f16c/2:1/w_2500,c_limit/hawking-intel.jpg)<br>
During this hack, I had a idea to relate this to people with mutism where people. In this case, people could use their complete hand and finger movements which could make communicating a lot faster. 
This hack reminded me of the physically disabled in our community who are still not benefitted by technology, even some the students from our university whom I used to see daily. <br> Stephen Hawkin is a true example that even people with disabilities are equally capable and deserve to be treated equally and have equal opportunities.

## What it does
The user has to wear this device and tap on his finger with other fingers. Just like tapping on a virtual keyboard that is present on your hand. These key presses are then converted into characters with which could be seen on the screen present on the back of the users' hand. Autocomplete algorithm is used which can be used to complete words or even sentences. 
![](https://github.com/prasad-kumkar/express/blob/master/circuit/EXPRESS%201.jpg?raw=true)

The image below shows the key-points (circles) where the user can touch to register a keypress. This shows a possible combination of 20+ keys.
![](https://github.com/prasad-kumkar/express/blob/master/circuit/Scan10005.jpg?raw=true)

Sign Language Recognition:
Flex sensors are placed on the back of each finger to measure each finger's bending. Measurement from flex sensor and gyroscope (hand-rotation) can be used as an input into our recurrent neural network to predict the sign language and it's meaning.
![](https://github.com/prasad-kumkar/express/blob/master/circuit/flex-sensor.jpg?raw=true)

## How I built it
This device is build by 3D printing it and attaching hardware to it. Code for the hardware is provided in the repository above. This code needs to be uploaded to an ESP32 development board which has to be attached to the components below.
For the simulation I used the following tools:
- [Circuito](https://www.circuito.io) for designing the circuit.
![](https://github.com/prasad-kumkar/express/blob/master/circuit/Screenshot%202020-09-27%20at%2012.18.52%20AM.png?raw=true)
- [Tinkercad](https://www.tinkercad.com) to simulate the designed circuit
![](https://github.com/prasad-kumkar/express/blob/master/circuit/Screenshot%202020-09-27%20at%2012.25.41%20AM.png?raw=true)
Sketched and ideas are drawn showing the core functionalities of the device.

#### The circuit requirements:
1. ESP32 - DevKitC [Qty: 1]
2. LCD Display 20x4 I2C [Qty: 1]
3. SparkFun MPU-6050 - Accelerometer and Gyro [Qty: 1]
4. Lithium Polymer Battery - 3.7v [Qty: 1]
5. Mini Pushbutton Switch [Qty: 8]
6. 10K Ohm Resistor [Qty: 8]
7. USB micro-B Cable - 6 Foot [Qty: 1]
8. Lipo Battery Charger Module 3.7v Step Up to 5v [Qty: 1]
9. BreadBoard [Qty: 1]
10. Jumper Wires Pack - M/M [Qty: 1]
11. Jumper Wires Pack - M/F [Qty: 2]
12. Male Headers Pack- Break-Away [Qty: 1]
13. Flex Sensor [Qty: 5]

## Challenges I ran into
Electronics or any kind of hardware is not currently available from where I come, stores and shops are closed and even Amazon is not able to deliver any as my city is in a complete lockdown and is having the worst COVID condition in the world right now. Without having the hardware, I had to sketch out all the circuit diagrams and models and create a simulation.

## Accomplishments that I'm proud of
I am proud that this device could bring a change in the world and can help people who cannot speak for themselves. The circuit that I have build and the code I've written is working properly. This device shall be able hamper individuals’ ability to have full participation in society, the same as people without disabilities. 

## What I learned
Pixel Art
Tinkercad Simulation

## What's next for Express
I am looking forward to use the prizes that I win from this hackathon to 3D print this device and buy the hardware to have a working prototype. I shall test this on people with mutism and have their feedback and work on improving it. I know this is not a perfect device but this is not the final version yet too. I am sure I would be able to take this project forward by getting more people interested and taking this in the market.<br>
This device shall further promote inclusion among our community by:
- Getting fair treatment from others (nondiscrimination);
- Making products, communications, and the physical environment more usable by as many people as possible (universal design);
- Modifying items, procedures, or systems to enable a person with a disability to use them to the maximum extent possible (reasonable accommodations); and
- Eliminating the belief that people with disabilities are unhealthy or less capable of doing things (stigma, stereotypes).
