#ifndef ROBOT_H
#define ROBOT_H
#endif
#include<Arduino.h>

enum LED{
	GREEN_LED=17,
	YELLOW_LED=14
};

void indicate_led(LED led,boolean on);
void test_leds();
