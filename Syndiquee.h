#pragma once

#ifndef __SYNDIQUEE_H__
#define __SYNDIQUEE_H__

#include "employee.h"

class Syndiquee : public Employee {
protected:
    double salaire_horaire;
    double heures_travaillees;
public:
    Syndiquee(std::string nom, int matricule, double salaire_horaire, double heures_travaillees);


    virtual double getPaie_Bute();
    double Impots_CA() ;
    double Impots_QC();

    virtual double getPaie_Nette();

    


};
  



#endif // __SYNDIQUEE_H__
