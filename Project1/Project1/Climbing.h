#ifndef Climbing_h
#define Climbing_h

#include "State.h"
#include "Jumping.h"
#include "Idle.h"
#include "Shoveling.h"
#include "Swordsmanship.h"
#include "Walking.h"
#include "Hammering.h"

#include<iostream>

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};

	void idle(Animation *a);
	void jumping(Animation *a);
	void walking(Animation *a);
	void swordsmanship(Animation *a);
	void shoveling(Animation *a);
	void hammering(Animation *a);
};

#endif // !Climbing_h