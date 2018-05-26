#pragma once
#include "stdafx.h"
#include <iostream>
#include "process.h"
#include "event.h"
#include "bloodStorage.h"
#include "donationCentre.h"
#include "bloodStorage.h"
#include "patient.h"
#include <queue>
#include "transfusionPoint.h"

class bloodCentre
{
public:
	bloodStorage * storage;  //magazyn jednostek krwi
	DonationCentre *bloodDonationCentre;    //Centrum dawców
	transfusionPoint *bloodTransfusion;     //Obsługa pacjentów/transfuzja
	std::queue<patient*> queueOfPatients;   //Kolejka pacjentów


	bloodCentre() {
		storage = new bloodStorage();
		bloodDonationCentre = new DonationCentre();
		bloodTransfusion = new transfusionPoint();
	}
};