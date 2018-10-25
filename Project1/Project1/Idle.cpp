#include "Idle.h"

void Idle::jumping(Animation* a)
{
	std::cout << "Going from idle to jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(Animation* a)
{
	std::cout << "Going from idle to climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::walking(Animation * a)
{
	std::cout << "Going from idle to walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;

}

void Idle::swordsmanship(Animation * a)
{
	std::cout << "Going from idle to swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;

}

void Idle::shoveling(Animation * a)
{
	std::cout << "Going from idle to shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;

}


void Idle::hammering(Animation * a)
{
	std::cout << "Going from idle to hamering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;

}