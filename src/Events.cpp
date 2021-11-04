#include "../include/Events.h"

StateEvents::StateEvents()
{
	m_current = stateEvent::NONE;
}
StateEvents::~StateEvents() {}

void StateEvents::setCurrent(stateEvent event) 
{
	m_current = event;
}

StateEvents::stateEvent StateEvents::getCurrent()
{
	return m_current;
}
