#include "Ponctuelle.h"

Ponctuelle::Ponctuelle(std::string nom, double matricule, double montant_paie_ponctuelle)
	:Employee(nom, matricule) {

	this->montant_paie_ponctuelle = montant_paie_ponctuelle;
}


double Ponctuelle::getPaie_Bute()
{
	 double Paie_Brute = this->montant_paie_ponctuelle;
	 return Paie_Brute;
 }

double Ponctuelle::Impots_CA() {
	double Impots_CA = this->getTaux_Federal() * this->getPaie_Bute();

	return Impots_CA;
}
double Ponctuelle::Impots_QC() {

	double Impots_QC = this->getTaux_Provincial() * this->getPaie_Bute();

	return Impots_QC;
}

double Ponctuelle::getPaie_Nette() {

	double Paie_Nette = (this->getPaie_Bute()) - (this->Impots_CA() + this->Impots_QC());

	return Paie_Nette;
}
