#include "Shoveling.h"

void Shoveling::idle(Animation * a)
{
	std::cout << "Going from shoveling to idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;

}

void Shoveling::jumping(Animation * a)
{
	std::cout << "Going from shoveling to jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;

}
void Shoveling::climbing(Animation * a)
{
	std::cout << "Going from shoveling to climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;

}

void Shoveling::walking(Animation * a)
{
	std::cout << "Going from shoveling to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;

}

void Shoveling::swordsmanship(Animation * a)
{
	std::cout << "Going from shoveling to swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;

}

void Shoveling::hammering(Animation * a)
{
	std::cout << "Going from shoveling to hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;

}
