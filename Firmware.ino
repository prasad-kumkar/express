
// Include Libraries
#include "Arduino.h"
#include "LiquidCrystal_PCF8574.h"
#include "MPU6050.h"
#include "Wire.h"
#include "I2Cdev.h"
#include "Button.h"


// Pin Definitions
#define PUSHBUTTON_1_PIN_2	0
#define PUSHBUTTON_2_PIN_2	2
#define PUSHBUTTON_3_PIN_2	4
#define PUSHBUTTON_4_PIN_2	5
#define PUSHBUTTON_5_PIN_2	6
#define PUSHBUTTON_6_PIN_2	7
#define PUSHBUTTON_7_PIN_2	8
#define PUSHBUTTON_8_PIN_2	9



// Global variables and defines
// There are several different versions of the LCD I2C adapter, each might have a different address.
// Try the given addresses by Un/commenting the following rows until LCD works follow the serial monitor prints. 
// To find your LCD address go to: http://playground.arduino.cc/Main/I2cScanner and run example.
#define LCD_ADDRESS 0x3F
//#define LCD_ADDRESS 0x27
// Define LCD characteristics
#define LCD_ROWS 4
#define LCD_COLUMNS 20
#define SCROLL_DELAY 150
#define BACKLIGHT 255
int16_t mpu6050Ax, mpu6050Ay, mpu6050Az;
int16_t mpu6050Gx, mpu6050Gy, mpu6050Gz;
// object initialization
LiquidCrystal_PCF8574 lcd20x4;
MPU6050 mpu6050;
Button pushButton_1(PUSHBUTTON_1_PIN_2);
Button pushButton_2(PUSHBUTTON_2_PIN_2);
Button pushButton_3(PUSHBUTTON_3_PIN_2);
Button pushButton_4(PUSHBUTTON_4_PIN_2);
Button pushButton_5(PUSHBUTTON_5_PIN_2);
Button pushButton_6(PUSHBUTTON_6_PIN_2);
Button pushButton_7(PUSHBUTTON_7_PIN_2);
Button pushButton_8(PUSHBUTTON_8_PIN_2);


// define vars for testing menu
const int timeout = 10000;       //define timeout of 10 sec
char menuOption = 0;
long time0;

// Setup the essentials for your circuit to work. It runs first every time your circuit is powered with electricity.
void setup() 
{
    // Setup Serial which is useful for debugging
    // Use the Serial Monitor to view printed messages
    Serial.begin(9600);
    while (!Serial) ; // wait for serial port to connect. Needed for native USB
    Serial.println("start");
    
    // initialize the lcd
    lcd20x4.begin(LCD_COLUMNS, LCD_ROWS, LCD_ADDRESS, BACKLIGHT); 
    Wire.begin();
    mpu6050.initialize();
    pushButton_1.init();
    pushButton_2.init();
    pushButton_3.init();
    pushButton_4.init();
    pushButton_5.init();
    pushButton_6.init();
    pushButton_7.init();
    pushButton_8.init();
    menuOption = menu();
    
}

// Main logic of your circuit. It defines the interaction between the components you selected. After setup, it runs over and over again, in an eternal loop.
void loop() 
{
    
    
    if(menuOption == '1') {
    // LCD Display 20x4 I2C - Test Code
    // The LCD Screen will display the text of your choice.
    lcd20x4.clear();                          // Clear LCD screen.
    lcd20x4.selectLine(2);                    // Set cursor at the begining of line 2
    lcd20x4.print("    Circuito.io  ");                   // Print print String to LCD on first line
    lcd20x4.selectLine(3);                    // Set cursor at the begining of line 3
    lcd20x4.print("      Rocks!  ");                   // Print print String to LCD on second line
    delay(1000);

    }
    else if(menuOption == '2') {
    // SparkFun MPU-6050 - Accelerometer and Gyro - Test Code
    mpu6050.getMotion6(&mpu6050Ax, &mpu6050Ay, &mpu6050Az, &mpu6050Gx, &mpu6050Gy, &mpu6050Gz);   //read accelerometer and gyroscope raw data in three axes
    double mpu6050Temp = ((double)mpu6050.getTemperature() + 12412.0) / 340.0;
    Serial.print("a/g-\t");
    Serial.print(mpu6050Ax); Serial.print("\t");
    Serial.print(mpu6050Ay); Serial.print("\t");
    Serial.print(mpu6050Az); Serial.print("\t");
    Serial.print(mpu6050Gx); Serial.print("\t");
    Serial.print(mpu6050Gy); Serial.print("\t");
    Serial.print(mpu6050Gz); Serial.print("\t");
    Serial.print(F("Temp- "));   
    Serial.println(mpu6050Temp);
    delay(100);

    }
    else if(menuOption == '3') {
    // Mini Pushbutton Switch #1 - Test Code
    //Read pushbutton state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also pushButton_1.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool pushButton_1Val = pushButton_1.read();
    Serial.print(F("Val: ")); Serial.println(pushButton_1Val);

    }
    else if(menuOption == '4') {
    // Mini Pushbutton Switch #2 - Test Code
    //Read pushbutton state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also pushButton_2.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool pushButton_2Val = pushButton_2.read();
    Serial.print(F("Val: ")); Serial.println(pushButton_2Val);

    }
    else if(menuOption == '5') {
    // Mini Pushbutton Switch #3 - Test Code
    //Read pushbutton state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also pushButton_3.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool pushButton_3Val = pushButton_3.read();
    Serial.print(F("Val: ")); Serial.println(pushButton_3Val);

    }
    else if(menuOption == '6') {
    // Mini Pushbutton Switch #4 - Test Code
    //Read pushbutton state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also pushButton_4.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool pushButton_4Val = pushButton_4.read();
    Serial.print(F("Val: ")); Serial.println(pushButton_4Val);

    }
    else if(menuOption == '7') {
    // Mini Pushbutton Switch #5 - Test Code
    //Read pushbutton state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also pushButton_5.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool pushButton_5Val = pushButton_5.read();
    Serial.print(F("Val: ")); Serial.println(pushButton_5Val);

    }
    else if(menuOption == '8') {
    // Mini Pushbutton Switch #6 - Test Code
    //Read pushbutton state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also pushButton_6.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool pushButton_6Val = pushButton_6.read();
    Serial.print(F("Val: ")); Serial.println(pushButton_6Val);

    }
    else if(menuOption == '9') {
    // Mini Pushbutton Switch #7 - Test Code
    //Read pushbutton state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also pushButton_7.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool pushButton_7Val = pushButton_7.read();
    Serial.print(F("Val: ")); Serial.println(pushButton_7Val);

    }
    else if(menuOption == '10') {
    // Mini Pushbutton Switch #8 - Test Code
    //Read pushbutton state. 
    //if button is pressed function will return HIGH (1). if not function will return LOW (0). 
    //for debounce funtionality try also pushButton_8.onPress(), .onRelease() and .onChange().
    //if debounce is not working properly try changing 'debounceDelay' variable in Button.h
    bool pushButton_8Val = pushButton_8.read();
    Serial.print(F("Val: ")); Serial.println(pushButton_8Val);

    }
    
    if (millis() - time0 > timeout)
    {
        menuOption = menu();
    }
    
}



// Menu function for selecting the components to be tested
// Follow serial monitor for instrcutions
char menu()
{

    Serial.println(F("\nWhich component would you like to test?"));
    Serial.println(F("(1) LCD Display 20x4 I2C"));
    Serial.println(F("(2) SparkFun MPU-6050 - Accelerometer and Gyro"));
    Serial.println(F("(3) Mini Pushbutton Switch #1"));
    Serial.println(F("(4) Mini Pushbutton Switch #2"));
    Serial.println(F("(5) Mini Pushbutton Switch #3"));
    Serial.println(F("(6) Mini Pushbutton Switch #4"));
    Serial.println(F("(7) Mini Pushbutton Switch #5"));
    Serial.println(F("(8) Mini Pushbutton Switch #6"));
    Serial.println(F("(9) Mini Pushbutton Switch #7"));
    Serial.println(F("(10) Mini Pushbutton Switch #8"));
    Serial.println(F("(menu) send anything else or press on board reset button\n"));
    while (!Serial.available());

    // Read data from serial monitor if received
    while (Serial.available()) 
    {
        char c = Serial.read();
        if (isAlphaNumeric(c)) 
        {   
            
            if(c == '1') 
    			Serial.println(F("Now Testing LCD Display 20x4 I2C"));
    		else if(c == '2') 
    			Serial.println(F("Now Testing SparkFun MPU-6050 - Accelerometer and Gyro"));
    		else if(c == '3') 
    			Serial.println(F("Now Testing Mini Pushbutton Switch #1"));
    		else if(c == '4') 
    			Serial.println(F("Now Testing Mini Pushbutton Switch #2"));
    		else if(c == '5') 
    			Serial.println(F("Now Testing Mini Pushbutton Switch #3"));
    		else if(c == '6') 
    			Serial.println(F("Now Testing Mini Pushbutton Switch #4"));
    		else if(c == '7') 
    			Serial.println(F("Now Testing Mini Pushbutton Switch #5"));
    		else if(c == '8') 
    			Serial.println(F("Now Testing Mini Pushbutton Switch #6"));
    		else if(c == '9') 
    			Serial.println(F("Now Testing Mini Pushbutton Switch #7"));
    		else if(c == '10') 
    			Serial.println(F("Now Testing Mini Pushbutton Switch #8"));
            else
            {
                Serial.println(F("illegal input!"));
                return 0;
            }
            time0 = millis();
            return c;
        }
    }
}
