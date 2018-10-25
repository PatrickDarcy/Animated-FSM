#include "Jumping.h"

void Jumping::idle(Animation * a)
{
	std::cout << "Going from jumping to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::climbing(Animation * a)
{
	std::cout << "Going from jumping to climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Jumping::walking(Animation * a)
{
	std::cout << "Going from jumping to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;

}

void Jumping::swordsmanship(Animation * a)
{
	std::cout << "Going from jumping to swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;

}

void Jumping::shoveling(Animation * a)
{
	std::cout << "Going from jumping to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;

}


void Jumping::hammering(Animation * a)
{
	std::cout << "Going from jumping to hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;

}