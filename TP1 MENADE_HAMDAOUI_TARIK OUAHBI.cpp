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

		std::cout << std::endl;

std::cout << "---------------------------------------------------------------------";
	
std::cout << "EXTRAIT DE PAIE -EMPLOYEES COLLEGE DE ROSEMONT" << std::endl;

std::cout << "----------------------------------------------------------------------";

	do {
		std::cout << std::endl;
		std::cout << "Menu: " << std::endl;
		std::cout << std::endl;
		std::cout << "1.Ajouter un employe syndique." << std::endl;
		std::cout << "2.Ajouter un employe contractuel" << std::endl;
		std::cout << "3.Ajouter un employe ponctuel" << std::endl;
		std::cout << "4.Afficher resultat de la paie pour les employes entres." << std::endl;
		std::cout << "5.Quitter le logiciel. " << std::endl;
		std::cin >> choix;


		if ( choix >0 && choix< 4)  //Saisie des informations sur les EmployéEs && vérification de numéro matricule entre 10000 et 99999
		{
			std::cout << " Nom de l'employee : ";
			std::cin >> nom;
			do {
				std::cout << " Numero matricule de l'employee : ";
				std::cin >> matricule;
				if (matricule < 10000 || matricule>99999)
					std::cout << "Erreur! Le numero de matricule doit-etre compris entre 10000 et 99999." << std::endl;
			} while (matricule < 10000 || matricule>99999);

		}

		switch (choix)
		{

		case 1:	    //Saisie des informations sur les EmployéEs syndiquéE
		{
			double salaire_horaire = 0;
			double heures_travaillees = 0;
			std::cout << "salaire_horaire : " ;
			std::cin >> salaire_horaire;
			std::cout << "heures_travaillees : " ;
			std::cin >> heures_travaillees;

			nos_employees[nbr_employee] = new Syndiquee(nom, matricule, salaire_horaire, heures_travaillees);
		   	nbr_employee++;

			break;
		}  	 
			

		case 2:  	//Saisie des informations sur les EmployéEs contractuels
		{
			double montant_octroye =0;
			int nbr_semaines =0;  	

			std::cout << "montant_octroye : " ;
			std::cin >> montant_octroye;
			std::cout << "nbr_semaines : " ;
			std::cin >> nbr_semaines;

		nos_employees[nbr_employee] = new Contractuelle(nom,  matricule,  montant_octroye,  nbr_semaines);

			nbr_employee++;

		 break;
		}

		case 3:  // Saisie des informations sur les EmployéEs Ponctuels
		
		{
			double montant_paie_ponctuelle= 0;
			
			std::cout << "montant_paie_ponctuelle : " ;
			std::cin >> montant_paie_ponctuelle;
			
			nos_employees[nbr_employee] = new Ponctuelle(nom, matricule, montant_paie_ponctuelle);
		   nbr_employee++;

			break;
		}
	   	
		case 4 :    /*Parcours du tableau de pointures et appel les méthodes polymorphiques correspondantes :  getPaie_Bute(),
                  *  Impots_CA(), Impots_QC(),  getPaie_Nette()*/
		{
			if (nbr_employee != 0)	// le tableau de pointures ne devrait pas être vide--

			{
				double total_paie = 0;
				double Total_impot_CA = 0;
				double Total_impot_QC = 0;

				for (int i = 0; i < nbr_employee; i++)	// affichage des paies individuels des	EmployéEs
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

				//Affichage des Totaux  : paie brute, paie nettes, impot_CA et impot_QC.
				std::cout << std::endl;
				std::cout << "Totaux " << std::endl;
				std::cout << "Montants totaux verses de " << total_paie << " $ " << std::endl;

				std::cout << "Impots a transferer CA " << Total_impot_CA << " $ " << std::endl;

				std::cout << "Impots a transferer QC " << Total_impot_QC << " $ " << std::endl;

				std::cout << "========================================= " << std::endl;

			}

			else
			{
				std::cout << "Le tableau des employees est vide !, Veuillez SVP saisie les informations des employéEs" << std::endl;
			}
			
			break;
		}

		case 5:  // quitter le logiciel
			
			
			std::cout << " Merci d'avoir utiliser notre logiciel, nous vous souhaitons une agreable journee " << std::endl;
			break;

		default:

			break;
		};
		

	} while (choix > 0 && choix < 6);


	  // Parcours de tableau de pointure et distruction des objets crées dynamiquement  
	for (int i = 0; i < nbr_employee;i++)
		delete nos_employees[i];
	


}

