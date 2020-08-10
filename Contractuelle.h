#pragma once

#ifndef __Contractuelle_H__
#define __Contractuelle_H__

#include <iostream>
#include <string>
#include "Employee.h"

class Contractuelle : public Employee {

protected :
	double montant_octroye;
	int nbr_semaines;
public :

	Contractuelle(std::string nom, double matricule, double montant_octroye, int nbr_semaines);

	virtual double getPaie_Bute();
	double Impots_CA();
	double Impots_QC();

	virtual double getPaie_Nette();
};

#endif
