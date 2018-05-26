#pragma once
#include "stdafx.h"
#include <iostream>
#include "process.h"
#include "event.h"

class bloodTransport : public process {
public:
	double timeToDeliver;
	int samplesToDeliver;
	bool typeofTransport;

	void Execute();

	bloodTransport(double time, int howMany, bool type, double clock_adr) : process(clock_adr){
		timeToDeliver = time;
		samplesToDeliver = howMany;
		typeofTransport = type;
	}
};