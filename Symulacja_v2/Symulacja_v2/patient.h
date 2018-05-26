#pragma once
#include "stdafx.h"
#include <iostream>
#include "process.h"
#include "event.h"

class patient : public process
{
public:
	int bloodSamplesNeeded; //zapotrzebowanie pacjenta na jednostki krwi

	void Execute();

	patient(int howMany, double clock_adr) :process(clock_adr){
		bloodSamplesNeeded = howMany;
	}

};