#include <RTBoard.h>

RTBoard::RTBoard(byte pin = 0){
	_pin = pin;
}

void RTBoard::begin(int s1 = 0, int s2 = 146, int s3 = 306, 
				   int s4 = 495, int s5 = 785){
					_s1 = s1;
					_s2 = s2;
					_s3 = s3;
					_s4 = s4;
					_s5 = s5;
}

void RTBoard::setAcc(byte acc = 10){_acc = acc;}

bool RTBoard::getSW1(){
	if((analogRead(_pin) >= _s1 - _acc) && 
	   (analogRead(_pin) <= _s1 + _acc)) { 
	   
	   return true;
	   }
	   else {
		   return false;
	   }
}

bool RTBoard::getSW2(){
	if((analogRead(_pin) >= _s2 - _acc) && 
	   (analogRead(_pin) <= _s2 + _acc)) { 
	   
	   return true;
	   }
	   else {
		   return false;
	   }
}

bool RTBoard::getSW3(){
	if((analogRead(_pin) >= _s3 - _acc) && 
	   (analogRead(_pin) <= _s3 + _acc)) { 
	   
	   return true;
	   }
	   else {
		   return false;
	   }
}

bool RTBoard::getSW4(){
	if((analogRead(_pin) >= _s4 - _acc) && 
	   (analogRead(_pin) <= _s4 + _acc)) { 
	   
	   return true;
	   }
	   else {
		   return false;
	   }
}

bool RTBoard::getSW5(){
	if((analogRead(_pin) >= _s5 - _acc) && 
	   (analogRead(_pin) <= _s5 + _acc)) { 
	   
	   return true;
	   }
	   else {
		   return false;
	   }
}

