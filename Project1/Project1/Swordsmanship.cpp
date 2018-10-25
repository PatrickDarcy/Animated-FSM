#include "Swordsmanship.h"


void Swordsmanship::idle(Animation * a)
{
	std::cout << "Going from swordsmanship to idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;

}

void Swordsmanship::jumping(Animation * a)
{
	std::cout << "Going from swordsmanship to jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;

}
void Swordsmanship::climbing(Animation * a)
{
	std::cout << "Going from swordsmanship to climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;

}

void Swordsmanship::walking(Animation * a)
{
	std::cout << "Going from swordsmanship to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;

}

void Swordsmanship::shoveling(Animation * a)
{
	std::cout << "Going from swordsmanship to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;

}

void Swordsmanship::hammering(Animation * a)
{
	std::cout << "Going from swordsmanship to hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;

}
