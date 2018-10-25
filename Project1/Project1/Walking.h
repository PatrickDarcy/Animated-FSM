#ifndef Walking_h
#define Walking_h

#include "State.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Hammering.h"
#include "Shoveling.h"
#include "Swordsmanship.h"
#include "Idle.h"

#include<iostream>

class Walking : public State
{
public:
	Walking() {};
	~Walking() {};

	void idle(Animation *a);
	void jumping(Animation *a);
	void climbing(Animation *a);
	void swordsmanship(Animation *a);
	void hammering(Animation *a);
	void shoveling(Animation *a);
};
#endif // !Walking.h

