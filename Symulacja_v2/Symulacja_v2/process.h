#pragma once
#include "stdafx.h"
#include <iostream>
#include "event.h"

class event;

class process
{
private:
	event * myEvent;
public:
	virtual void Execute() {}
	void Activate(double);
	int Phase;
	bool Teminated;
	double *clock;

	process(double clock_adr) : Phase(0), Teminated(false) {
		myEvent = new event(this);
		clock = &clock_adr;
	}

};

void process::Activate(double time) {
	myEvent->eventTime = *clock + time;
	//agenda.schedule(myEvent);
}