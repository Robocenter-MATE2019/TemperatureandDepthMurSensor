#pragma once
#include <OneWire.h>
#include "Timer.h"
class TemperatureSensor
{
public:
	TemperatureSensor(int pin) : m_wire(pin)
	{
	}
	float getTemperature();
private:
	OneWire m_wire;
	Timer m_timer;
	float result = -1;
};
