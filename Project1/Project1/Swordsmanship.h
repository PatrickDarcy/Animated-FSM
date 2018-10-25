#ifndef Swordsmanship_h
#define Swordsmanship_h

#include "State.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Hammering.h"
#include "Shoveling.h"
#include "Walking.h"
#include "Idle.h"

#include<iostream>

class Swordsmanship : public State
{
public:
	Swordsmanship() {};
	~Swordsmanship() {};

	void idle(Animation *a);
	void jumping(Animation *a);
	void climbing(Animation *a);
	void walking(Animation *a);
	void hammering(Animation *a);
	void shoveling(Animation *a);
};
#endif // !Swordsmanship.h

