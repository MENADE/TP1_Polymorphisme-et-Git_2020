#include "syndiquee.h"
#include "employee.h"


Syndiquee::Syndiquee(std::string nom, int matricule, double salaire_horaire, double heures_travaillees)
	: Employee(nom, matricule) {
	this->salaire_horaire = salaire_horaire;
	this->heures_travaillees = heures_travaillees;
}



double Syndiquee::getPaie_Bute() {

	double Paie_Brute = (this->salaire_horaire * this->heures_travaillees) ;
	return Paie_Brute;
}

 
double Syndiquee::Impots_CA() {

	double Impots_CA = this->getTaux_Federal() * this->getPaie_Bute ();

	return Impots_CA;
}
double Syndiquee::Impots_QC() {
	double Impots_QC = this->getTaux_Provincial() * this->getPaie_Bute ();
	
	return Impots_QC;
}

double Syndiquee::getPaie_Nette() {

	double Paie_Nette = (this->getPaie_Bute()) - (this->Impots_CA() + this->Impots_QC());

	return Paie_Nette;
}
