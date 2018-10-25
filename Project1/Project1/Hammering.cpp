#include "Hammering.h"

void Hammering::idle(Animation * a)
{
	std::cout << "Going from Hammering to idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;

}

void Hammering::jumping(Animation * a)
{
	std::cout << "Going from Hammering to jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;

}
void Hammering::climbing(Animation * a)
{
	std::cout << "Going from Hammering to climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;

}

void Hammering::walking(Animation * a)
{
	std::cout << "Going from Hammering to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;

}

void Hammering::swordsmanship(Animation * a)
{
	std::cout << "Going from Hammering to swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;

}

void Hammering::shoveling(Animation * a)
{
	std::cout << "Going from Hammering to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;

}
