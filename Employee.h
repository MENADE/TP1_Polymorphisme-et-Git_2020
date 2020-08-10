#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#include <iostream>
#include <string>

class Employee {
private:
    std::string nom;
    int matricule;
      double Taux_Tax_Federal;
      double Taux_Tax_Provincial;
public:
    Employee(std::string le_nom, int matricule);
    virtual ~Employee() { std::cout << "Employee detruite" << std::endl; }

    

    std::string getNom();
    int getMatricule();

     double getTaux_Federal();
     double getTaux_Provincial();

    virtual double getPaie_Bute() = 0;

    virtual double Impots_CA() = 0;

    virtual double Impots_QC() = 0;

    virtual double getPaie_Nette() = 0;

};

#endif // __EMPLOYEE_H__
