#ifndef Animation_h
#define Animation_h


class Animation
{
	class State* current;
	bool m_climbing = false;

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
	bool getClimbing();
};

#endif // !Animation_h
#include"State.h"
