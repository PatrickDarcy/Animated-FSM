#include "Animation.h"
#include "Idle.h"

Animation::Animation()
{
	current = new Idle();
}

void Animation::idle()
{
	current->idle(this);
	m_climbing = false;
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::climbing()
{
	current->climbing(this);
	m_climbing = true;
}

void Animation::shoveling()
{
	current->shoveling(this);
}

void Animation::walking()
{
	current->walking(this);
}

bool Animation::getClimbing()
{
	return m_climbing;
}

void Animation::swordsmanship()
{
	current->swordsmanship(this);
}

void Animation::hammering()
{
	current->hammering(this);
}
