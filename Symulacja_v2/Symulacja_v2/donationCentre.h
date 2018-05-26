#pragma once
#include "stdafx.h"
#include <iostream>
#include "Donator.h"

class DonationCentre
{
public:
	Donator * currentDonator;   //Obecnie obsługiwany dawca


	DonationCentre() :currentDonator(NULL) {  }
};