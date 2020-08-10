#include <iostream>
#include "Employee.h"
#include "Syndiquee.h"
#include "Contractuelle.h"
#include "Ponctuelle.h"

int main()
{
	// Tableau des employéEs
	Employee* nos_employees[250];
	int nbr_employee =0;
	
	 int choix = 0, matricule = 0;
		std::string nom = "";
	do {
		std::cout << "Menu: " << std::endl;
		std::cout << "1.Ajouter un employe syndique." << std::endl;
		std::cout << "2.Ajouter un employe contractuel" << std::endl;
		std::cout << "3.Ajouter un employe ponctuel" << std::endl;
		std::cout << "4.Afficher resultat de la paie pour les employes entres." << std::endl;
		std::cout << "5.Quitter le logiciel. " << std::endl;
		std::cin >> choix;

		switch (choix)
		{

		case 1:	    //Employee syndiquee
		{
			double salaire_horaire = 0;
			double heures_travaillees = 0;

			std::cout << "nom:" << std::endl;
			std::cin >> nom;
			std::cout << "matricule:" << std::endl;
			std::cin >> matricule;

			std::cout << "salaire_horaire:" << std::endl;
			std::cin >> salaire_horaire;
			std::cout << "heures_travaillees:" << std::endl;
			std::cin >> heures_travaillees;

			nos_employees[nbr_employee] = new Syndiquee(nom, matricule, salaire_horaire, heures_travaillees);

			nbr_employee++;

			break;
		}	  	 
			

		case 2:  			 //Employee Contractuelle.
		{
			double montant_octroye =0;
			int nbr_semaines =0;
			std::cout << "nom:" << std::endl;
			std::cin >> nom;
			std::cout << "matricule:" << std::endl;
			std::cin >> matricule;

			std::cout << "montant_octroye:" << std::endl;
			std::cin >> montant_octroye;
			std::cout << "nbr_semaines:" << std::endl;
			std::cin >> nbr_semaines;

		nos_employees[nbr_employee] = new Contractuelle(nom,  matricule,  montant_octroye,  nbr_semaines);

			nbr_employee++;

		 break;
		}

		case 3:  // Employee Ponctuelle
		
		{
			double montant_paie_ponctuelle= 0;
			std::cout << "nom:" << std::endl;
			std::cin >> nom;
			std::cout << "matricule:" << std::endl;
			std::cin >> matricule;

			std::cout << "montant_paie_ponctuelle:" << std::endl;
			std::cin >> montant_paie_ponctuelle;
			

			nos_employees[nbr_employee] = new Ponctuelle(nom, matricule, montant_paie_ponctuelle);

			nbr_employee++;

			break;
		}
	   	
		case 4 :    // Afficher le résultat de la paie pour les employéEs entréEs

		{
				  double total_paie = 0;
			double Total_impot_CA = 0;
			double Total_impot_QC = 0;
			

			for (int i = 0; i < nbr_employee; i++) 
			{
			 

				std::cout << nos_employees[i]->getNom() << " " << nos_employees[i]->getMatricule() << std::endl;

				std::cout << " Paie brute de  " << nos_employees[i]->getPaie_Bute() << " $ " << std::endl;

				std::cout << " Impots CA de  " << nos_employees[i]->Impots_CA() << " $ " << std::endl;

				std::cout << " Impots QC de  " << nos_employees[i]->Impots_QC() << " $ " << std::endl;

				std::cout << " Paie nette de  " << nos_employees[i]->getPaie_Nette() << " $ " << std::endl;


				total_paie = total_paie + nos_employees[i]->getPaie_Nette();

				Total_impot_CA = Total_impot_CA + nos_employees[i]->Impots_CA();

				Total_impot_QC = Total_impot_QC + nos_employees[i]->Impots_QC();

			}

			//Affichage de la paie totale.
			std::cout << std::endl;
			std::cout << "Totaux " << std::endl;
			std::cout << "Montants totaux verses de " << total_paie << " $ " << std::endl;

			std::cout << "Impots a transferer CA " << Total_impot_CA << " $ " << std::endl;

			std::cout << "Impots a transferer QC " << Total_impot_QC << " $ " << std::endl;

			std::cout << std::endl;

			break;
		}

		default:

			break;
		};
		

	} while (choix > 0 && choix < 5);



	
	


}

