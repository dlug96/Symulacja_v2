#pragma once
#include "stdafx.h"
#include <iostream>
#include "process.h"
#include "event.h"
#include "bloodSample.h"
#include "bloodTransport.h"

class bloodStorage {
public:
	int howManySamples; //informuje o liczbie jednostek krwi znajodujących się w magazynie
	bool normalPackage_Flag;    //Flagi informujące o tym czy dostawa została wysłana
	bool urgentPackage_Flag;
	bloodSample *bloodList_First; //lista dostępnych jednostek krwi

	bloodStorage() : howManySamples(0), normalPackage_Flag(false), urgentPackage_Flag(false), bloodList_First(NULL) {}
};