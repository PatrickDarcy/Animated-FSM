#ifndef Idle_h
#define Idle_h

#include "State.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Shoveling.h"
#include "Swordsmanship.h"
#include "Walking.h"
#include "Hammering.h"

#include<iostream>

class Idle : public State
{
public:
	Idle() { };
	~Idle() { };

	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation *a);
	void swordsmanship(Animation *a);
	void shoveling(Animation *a);
	void hammering(Animation *a);
};

#endif // !Idle_h
