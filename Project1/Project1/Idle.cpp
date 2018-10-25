#include "Idle.h"

void Idle::jumping(Animation* a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Idle::climbing(Animation* a)
{
	std::cout << "Climbing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::walking(Animation * a)
{
	std::cout << "Going from Hammering to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;

}

void Idle::swordsmanship(Animation * a)
{
	std::cout << "Going from Hammering to swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;

}

void Idle::shoveling(Animation * a)
{
	std::cout << "Going from Hammering to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;

}


void Idle::hammering(Animation * a)
{
	std::cout << "Going from shoveling to hamering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;

}