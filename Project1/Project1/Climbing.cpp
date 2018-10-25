#include "Climbing.h"

void Climbing::idle(Animation * a)
{
	std::cout << "Going from Climbing to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Climbing::jumping(Animation * a)
{
	std::cout << "Going from Climbing to jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;

}

void Climbing::walking(Animation * a)
{
	std::cout << "Going from Hammering to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;

}

void Climbing::swordsmanship(Animation * a)
{
	std::cout << "Going from Hammering to swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;

}

void Climbing::shoveling(Animation * a)
{
	std::cout << "Going from Hammering to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;

}


void Climbing::hammering(Animation * a)
{
	std::cout << "Going from shoveling to hamering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;

}