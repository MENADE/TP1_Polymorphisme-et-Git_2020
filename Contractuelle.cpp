#include "Contractuelle.h"

Contractuelle::Contractuelle(std::string nom, double matricule, double montant_octroye, int nbr_semaines)
	: Employee(nom, matricule) {

	this->montant_octroye = montant_octroye;
	this->nbr_semaines = nbr_semaines;

  }


double Contractuelle::getPaie_Bute() {

	double Paie_Brute = this->montant_octroye / this->nbr_semaines;
	return Paie_Brute;

}

double Contractuelle::Impots_CA() {
	double Impots_CA = this->getTaux_Federal() * this->getPaie_Bute();

	return Impots_CA;
}
double Contractuelle::Impots_QC() {

	double Impots_QC = this->getTaux_Provincial() * this->getPaie_Bute();

	return Impots_QC;
}

double Contractuelle::getPaie_Nette() {

	double Paie_Nette = (this->getPaie_Bute()) - (this->Impots_CA() + this->Impots_QC());

	return Paie_Nette;
}
