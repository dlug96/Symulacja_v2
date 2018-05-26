#pragma once
#include "stdafx.h"
#include "patient.h"

class transfusionPoint
{
public:
	patient * currentPatient;    //Obcecnie obługiwany pacjent

	transfusionPoint() :currentPatient(NULL) {}
};