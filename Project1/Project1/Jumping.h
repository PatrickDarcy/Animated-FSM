#ifndef Jumping_h
#define Jumping_h

#include "State.h"
#include "idle.h"
#include "Climbing.h"
#include "Shoveling.h"
#include "Swordsmanship.h"
#include "Walking.h"
#include "Hammering.h"

#include <iostream>

class Jumping : public State

{
public:
	Jumping() {};
	~Jumping() {};
	void idle(Animation* a);
	void climbing(Animation *a);
	void walking(Animation *a);
	void swordsmanship(Animation *a);
	void shoveling(Animation *a);
	void hammering(Animation *a);
};
#endif // !Jumping_h
