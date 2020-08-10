# TP1_Polymorphisme-et-Git_2020
Le TP1 a été réalisé par : -Menade Hamdaoui -Tarik Ouahbi
		

Sujet : application des Methodes Polymorphiques et utilisation de l'outil Git

1. Mise en contexte théorique
1.1. Polymorphisme
Une des forces de la programmation orientée-objet est le polymorphisme. Que des objets très différents puissent avoir un comportement commun est parfois très pratique. Par exemple, une liste de produits différents, facturés de manière différente, vont tous avoir un prix. Il sera peut-être calculé de manière
différente d'un produit à l'autre mais le travail de la méthode sera toujours le même : pouvoir produire un prix.

1.2. Git
Git est l'outil de collaboration le plus utilisé au monde. UnE programmeurE qui ne sait pas se servir de Git travaille avec une main attachée dans le dos. Il est donc essentiel de savoir s'en servir intelligemment, et de pouvoir résoudre adéquatement les problèmes qui peuvent survenir durant son utilisation.

2. Objectifs
L’étudiantE devra démontrer sa capacité d’exploiter les bases du C/C++ et de l’orienté-objet, ainsi que de partager son travail en utilisant Git

3. Mise en contexte pratique
Vous devez programmer un logiciel de gestion de la paie pour une organisation. Ce logiciel doit fonctionner en ligne de commande. Ce logiciel doit être capable de gérer les trois types d'employéEs de l'organisation et leurs situations particulières :

• Le premier type est l'employéE syndiquéE. Cette personne est payée à l'heure. Sa paie pour une semaine est définie par un taux horaire et un nombre d'heures travaillées durant la dernière
semaine.

• Le deuxième type est l'employéE contractuelLE. Sa paie est un montant fixe octroyé pour un nombre de semaines. Sa paie pour une semaine est définie par le montant fixe octroyé divisé par le nombre de semaines.

• Le troisième type est l'employéE ponctuelLE. Il s'agit d'une personne engagée pour une seule tâche, par exemple pour donner une conférence lors d'un événement. Sa paie est un montant simple.

De toutes les paies, il faut soutirer un 15% du montant de base correspondant aux impôts fédéraux et un autre 15% du montant de base correspondant aux impôts provinciaux.

L'objectif du logiciel à programme est de permettre d'entrer les informations des employéEs pour la semaine, pour ensuite calculer et afficher la paie hebdomadaire de l'organisation.

4. Travail à effectuer
Le travail doit se faire idéalement en équipes de deux personnes. Vu les circonstances, il peut être possible de faire le travail seul.
Votre travail consiste à programmer le logiciel demandé par l'organisation. Ce logiciel doit :
• Afficher un menu permettant de :
 ◦ Ajouter unE employéE syndiquéE avec ses informations,
 ◦ Ajouter unE employéE contractuelLE avec ses informations,
 ◦ Ajouter unE employéE ponctuelLE avec ses informations.
 ◦ Afficher le résultat de la paie pour les employéEs entréEs.
 ◦ Quitter le logiciel.

TouTEs les employéEs possèdent un nom et un numéro de matricule. Le nom est limité au nom de famille, sans espaces. Le numéro de matricule est une valeur numérique entre 10000 et 99999.

UnE employéE syndiquéE possède en plus de l'employéE un salaire horaire, ainsi qu'un nombre d'heures travaillées lors de la dernière semaine. Il doit être possible d'entrer des valeurs fractionnaires (ex.: salaire de 20,55$/h, heures travaillées de 2,5).

UnE employéE contractuelLE possède en plus de l'employéE un montant fixe octroyé pour l'ensemble du contrat, ainsi qu'un nombre de semaines. Les deux valeurs sont entières.

UnE employéE ponctuelLE possède en plus de l'employéE un montant unique donné pour le travail ponctuel qu'elle ou il a fait.
À ce stade-ci, il n'est pas possible de corriger des valeurs entrées, ni d'enlever unE employéE qui a déjà été entréE.

4.1. Contraintes techniques
Les employéEs doivent être crééEs dynamiquement. Les employéEs doivent aussi être détruitEs dynamiquement avant la fin du programme. Les objets créés doivent être conservés dans un tableau de pointeur de 250 cases. On suppose que l'organisation n'aura jamais plus de 250 employéEs.
Votre programme doit utiliser au minimum quatre classes : une classe-mère "Employee", et trois classes-filles "Syndiquee", "Contractuelle" et "Ponctuelle".
Le code doit respecter le guide de programmation fourni.

Pour calculer la paie, le logiciel doit faire une boucle qui passe à travers le tableau de pointeurs, et pour chaque objet il doit appeler au moins une méthode polymorphique.
Le code du projet doit être géré avec Git, et le code doit être soumis dans votre compte GitHub. Le code final à évaluer doit se trouver dans une branche appelée « release ».

4.2. Résultats attendus
Si on entre les valeurs suivantes :
 Type : SyndiquéE Nom : Gratton, Matricule : 54123, Salaire : 20.55, Heures : 37.5
 Type : ContractuelLE Nom : Faizan, Matricule : 12354, Montant : 5000, Semaines : 7
 Type : PonctuelLE Nom : Rodrigo, Matricule : 23451, Montant : 250

L'affichage attendu devrait être le suivant :
Gratton 54123
 Paie brute de 770.625 $
 Impots CA de 115.594 $
 Impots QC de 115.594 $
 Paie nette de 539.438 $
Faizan 12354
 Paie brute de 714.286 $
 Impots CA de 107.143 $
 Impots QC de 107.143 $
 Paie nette de 500 $
Rodrigo 23451
 Paie brute de 250 $
 Impots CA de 37.5 $
 Impots QC de 37.5 $
 Paie nette de 175 $
 
Totaux
 Montants totaux verses de 1734.91 $
 Impots a transferer CA de 260.237 $
 Impots a transferer QC de 260.237 $

Notez que les valeurs flottantes peuvent varier légèrement, dépendant du type de variable utilisé et de votre compilateur. Vous n'avez pas à limiter l'affichage à un nombre précis de chiffres après la virgule.

5. Rétroaction
Nous travaillons à l’amélioration continue des travaux pratiques de 420-977-RO. Ces questions peuvent être répondues très brièvement.

● Combien de temps avez-vous passé sur le travail pratique, en heures-personnes, en sachant que deux personnes travaillant pendant trois heures correspondent à six heures-personnes ? Est-ce que l'effort demandé pour ce travail pratique vous semble adéquat ?

● Avez-vous des recommandations à faire afin d’améliorer ce travail pratique ?

6. Livrable à remettre, procédure de remise et retard
Vous devez remettre un fichier DOCX, ODT ou PDF sur LÉA indiquant les noms et matricules des membres de votre équipe ainsi que l'adresse de votre projet GitHub.
Seule une remise électronique est exigée. Il n'y a pas de rapports papiers à remettre. La remise doit se faire sur LÉA, avant le lundi 10 août 2020, midi. Si jamais il y avait des problèmes avec LÉA, envoyez votre fichier par courriel au m***.*******e@gmail.com .

7. Barème de correction
Ce travail pratique est noté sur 20 points et vaut 20% de la note finale.

ÉLÉMENT POINTS

Fonctionnement du logiciel 8 pts
- Le menu est fonctionnel et complet.
- Il est possible d'ajouter les trois types d'employéEs avec leur informations.
- L'affichage de la paie correspond aux résultats attendus.

Contraintes techniques 10 pts
- Création et destruction dynamique des objets.
- Arbre d'héritage des classes correct.
- Les classes-mères et classes-filles possèdent les attributs adéquats.
- Utilisation adéquate du polymorphisme.
- Code adéquatement soumis par Git sur GitHub sur une branche « release ».

Qualité du code 2 pts
- Les éléments du guide de programmation ont été respectés.

Total 20 pts

Bonus (pour les as !) +2 pts
- Ajoutez un élément du menu permettant d'enlever unE employéE déjà entréE,
sur la base du matricule. Votre solution ne doit pas laisser de cases vides au
milieu du tableau.
