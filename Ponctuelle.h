#pragma once

#ifndef __Ponctuelle_H__
#define __Ponctuelle_H__

#include <iostream>
#include <string>
#include "Employee.h"

class Ponctuelle :public Employee{

protected:
	double montant_paie_ponctuelle;

public :

	Ponctuelle(std::string nom, double matricule, double montant_paie_ponctuelle);

	virtual double getPaie_Bute();
	double Impots_CA();
	double Impots_QC();

	virtual double getPaie_Nette();


};

#endif