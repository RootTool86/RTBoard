#pragma once
#include <Arduino.h>
// описание класса
class RTBoard {   // класс Color
	public:
		RTBoard(byte pin = 0);
		void begin(int s1 = 0, int s2 = 146, int s3 = 306, 
				   int s4 = 495, int s5 = 785);
		void setAcc(byte acc = 10);
		
		bool getSW1();
		bool getSW2();
		bool getSW3();
		bool getSW4();
		bool getSW5();
		
	private:
		byte _pin;
		byte _acc;
		int _s1;
		int _s2;
		int _s3;
		int _s4;
		int _s5;
		
};