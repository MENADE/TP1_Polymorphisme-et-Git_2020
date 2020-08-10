#include "employee.h"

Employee::Employee(std::string le_nom, int le_matricule) {
	this->nom = le_nom;
	this->matricule = le_matricule;

}

std::string Employee::getNom() {
	return this->nom;
}

int Employee::getMatricule() {

	return this->matricule;
}

 double Employee::getTaux_Federal() {

	return this->Taux_Tax_Federal = 0.15;
	}

 double Employee::getTaux_Provincial() {

	 return this->Taux_Tax_Provincial = 0.15;
 }

