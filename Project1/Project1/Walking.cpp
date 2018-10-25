#include "Walking.h"

void Walking::idle(Animation * a)
{
	std::cout << "Going from walking to idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;

}

void Walking::jumping(Animation * a)
{
	std::cout << "Going from walking to jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;

}
void Walking::climbing(Animation * a)
{
	std::cout << "Going from walking to climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;

}

void Walking::swordsmanship(Animation * a)
{
	std::cout << "Going from walking to swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;

}

void Walking::shoveling(Animation * a)
{
	std::cout << "Going from walking to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;

}

void Walking::hammering(Animation * a)
{
	std::cout << "Going from walking to hamering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;

}
