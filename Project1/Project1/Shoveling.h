#ifndef Shoveling_h
#define Shoveling_h

#include "State.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Hammering.h"
#include "Swordsmanship.h"
#include "Walking.h"

#include<iostream>

class Shoveling : public State
{
public:
	Shoveling() {};
	~Shoveling() {};

	void idle(Animation *a);
	void jumping(Animation *a);
	void climbing(Animation *a);
	void walking(Animation *a);
	void swordsmanship(Animation *a);
	void hammering(Animation *a);
};
#endif // !Shoveling.h
