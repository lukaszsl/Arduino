#include <Servo.h> // Library responsible for servos

Servo serwomechanism;  // Create an object that allows us to refer to the servo
int position = 0; // Current servo position
int shift = 6; // How much servo position has to change at one step

void setup()
{
	serwomechanism.attach(9);  // Connect the servo to pin 9
}

void loop()
{
	if (position < 180) { // If position is in the range
		serwomechanism.write(position); // Make a move
	} else { // If not, return to start position
		position = 0;
	}

	position = position + shift; // Increase the current servo position
	delay(200);
}
