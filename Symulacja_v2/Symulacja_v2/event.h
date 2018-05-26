#pragma once
#include "stdafx.h"
#include <iostream>
#include "process.h"

class process;

class event
{
public:
	double eventTime;
	process *proc;

	event(process *ptr) : eventTime(0.0), proc(ptr) {}
};