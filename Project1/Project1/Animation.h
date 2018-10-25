#ifndef Animation_h
#define Animation_h


class Animation
{
	class State* current;

public:

	Animation();

	void setCurrent(State* s)
	{
		current = s;
	}

	void idle();
	void jumping();
	void climbing();
	void hammering();
	void shoveling();
	void swordsmanship();
	void walking();
};

#endif // !Animation_h
#include"State.h"
