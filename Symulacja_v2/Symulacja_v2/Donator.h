#pragma once
#include "stdafx.h"
#include <iostream>
#include "process.h"
#include "event.h"

class Donator : public process
{
public:
	void Execute();
};