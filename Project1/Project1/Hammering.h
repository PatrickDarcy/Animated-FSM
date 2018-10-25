#ifndef Hammering_h
#define Hammering_h

#include "State.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Shoveling.h"
#include "Swordsmanship.h"
#include "Walking.h"

#include<iostream>

class Hammering : public State
{
public:
	Hammering() {};
	~Hammering() {};

	void idle(Animation *a);
	void jumping(Animation *a);
	void climbing(Animation *a);
	void walking(Animation *a);
	void swordsmanship(Animation *a);
	void shoveling(Animation *a);
};
#endif // !Hammering_h

