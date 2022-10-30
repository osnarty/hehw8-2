// modified makeLED OOP class.
// Added a blink functionality and the ability to select any LED

#include "derek_LED.h"
int main(int argc, char* argv[])
{
	if(argc!=4)
	{
		cout << "Using is myblink 'command'" << endl;
		cout << "   command is either: on, off, flash, status or blink" << endl;
		cout << " ex. myBlink blink 2 5 , will blink led2 five times " << endl;
		cout << "      myBlink on 1 0 ,will turn on led1 and last # can be any integer" << endl;
		return 2;
	}

	cout << "Starting the myBlink program" << endl;
	// taking in 3 arguments of nLED and #
	string cmd(argv[1]);
	int nLED = atoi(argv[2]);
	int n = atoi(argv[3]);
	
	// Array of LED 4 from 0 1 2 3 
	LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
	
	// command to run based on input whether 0 1 2 3
	if(cmd=="on")leds[nLED].turnOn();
	else if(cmd=="off")leds[nLED].turnOff();
	else if(cmd=="flash")leds[nLED].flash("100"); //default is "50"
	else if(cmd=="status")leds[nLED].outputState();
	else if(cmd=="blink")leds[nLED].blink(n);
	else{cout << "Invalid command!" << endl;} 
      
	cout << "Finished the myblink program" << endl;
	return 0;
}