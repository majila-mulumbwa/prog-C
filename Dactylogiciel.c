
#include<stdlib.h>
#include<Windows.h>
#include<stdio.h>



void acceuil();
void configurer();
void aide();
void demarrer();
void cls();
void detail();

// prédéfinition des procédure : donne une portée globale à l'appelle de fonctions ou procédures , ne rien modifier
char mainF[40] = { "dan.txt" };

// création de la structure équivalent d'une table en SQL
struct Personne
{
	char pre[30]; // champ prénom
	char pseu[30];// champ pseudonyme
	char genre;// genre
	double time;
};

// procédure demarrer qui lance le jeux et toutes les configuration prédéfinie
struct Personne p1, p2;

// création de deux objets : première personne et deuxième
void acceuil()
{
	// code de l'ecran d'acceuil
	printf("\n\n\t\t\t\t\t========== ECRAN D'ACCEUIL ===========\n\n");
	printf("\t1.Demarrer\n");
	printf("\t2.Configurer\n");
	printf("\t3.Aide\n");
	int choix;
	scanf("%d",&choix);

	switch (choix)
	{
	case 1: cls(); demarrer(); break;// demarre le jeux si le choix est 1
	case 2: cls(); configurer();  break;// demarre la configuration si le choix est 2
	case 3:   cls(); aide(); break;// demarre l'aide si le choix est 3
	default: // sinon si le choix est différent de 1,2 ou 3 affiche Commande inconnue
		printf("Commande inconnue \n"); acceuil();
		break;
	}
}

void demarrer()
{


	// message ....... tabulation des écris = \t  retour à la ligne =\n  retour chariot = \r
	printf("\n\n\t\t\t\t\t============ DEMARRAGE  ===========\n\n\n\n ");
	printf(" Veuillez renseignner votre identite :\n\n");

	printf("\tjoueur n°1 :\n\n ");
	printf("\tPrenom : ");
	// partout où se trouve l'expression cin>> est une partie écrite en C++ Pour lire l'entrée de saisie à supprimer
	// et à remplacer par scanf()


	scanf("%s", p1.pre);
	printf("\tPseudo :");
	scanf("%s",p1.pseu);
	printf("\tGenre :");
	scanf("%c",&p1.genre); 
	printf("\n\n 0.Retour <<<---\t\t\t\t\t\t\t\t\t 1.Suivant --->>> ");
	int c;// variable qui lira tous les choix de l'utilisateur
	scanf("%d",&c);
	if (c == 0) { cls(); acceuil(); }// cls () : netoye la console à voir le code plus bas, acceuil() fait appel à l'acceuil

	else {
		cls();

		printf("\n\n\t\t\t\t\t========== DEMARRAGE ===========\n\n\n\n ");
		printf(" Veuillez renseignner votre identite :\n\n");

		printf("\tjoueur n°2 :\n\n ");
		printf("\tPrenom : ");
		scanf("%s"p2.pre);
		printf("\tPseudo :");
		scanf("%s",p2.pseu);
		printf("\tGenre :");
		scanf("%c",&p2.genre);
	}


	printf("\n\n 0.Retour <<<---\t\t\t\t\t\t\t\t\t 1.Suivant --->>> ");
	c;
	scanf("%d",&c);
	if (c == 0) { cls(); acceuil(); }
	cls();
	printf("\n\n\t\t\t\t\t========== DEMARRAGE  ==========\n\n\n\n ");
	printf(" Veuillez renseignner les informations suivantes :\n\n");
	printf("\t\t\t*Nombres des mots * \t\t\t\t *Nombres de characteres des mots*\n\n\n");
	detail();
}



void cls()
{
	system("cls");// system ("cls") : netoye la console sur windows et system ("clear") sur linux 
}


void detail()
{

	mainF[40];
	FILE* fichier = fopen(mainF, "r");
	if (fichier == NULL)
	{
		printf("erreur d'ouverture ");

	}
	else {
		char conten[50];
		int nbChar, nbMots;
		printf("\nVeuillez saisir le nombre de mots a generer compris entre [4 et 8 ] : ");
		do
		{
			scanf_s("\n%d", &nbMots);
			if (nbMots < 4)
			{
				printf("\n c'est peu de mots !");
				printf("\nVeuillez saisir le nombre de mots a generer compris entre [4 et 8 ] : ");

			}
			else if (nbMots > 8)
			{
				printf("\nc'est beaucoup de mots ");
				printf("\nVeuillez saisir le nombre de mots a generer compris entre [4 et 8 ] : ");

			}
			system("cls");
			printf("\n\n\t\t\t\t\t========== DEMARRAGE  ==========\n\n\n\n ");
			printf(" Veuillez renseignner les informations suivantes :\n\n");
			printf("\t\t\t*Nombres des mots * \t\t\t\t *Nombres de characteres des mots*\n\n\n");

		} while (nbMots < 4 || nbMots>8);

		printf("\nVeuillez saisir le nombre de characteres a generer compris entre [4 et 8 ] : ");

		do
		{
			scanf_s("%d", &nbChar);
			if (nbChar < 4)
			{
				printf("\n c'est peu de mots !");
				printf("\nVeuillez saisir le nombre de mots a generer compris entre [4 et 8 ] : ");

			}
			else if (nbChar > 8)
			{
				printf("\nc'est beaucoup de mots ");
				printf("\nVeuillez saisir le nombre de mots a generer compris entre [4 et 8 ] : ");

			}

			system("cls");
			printf("\n\n\t\t\t\t\t========== DEMARRAGE  ==========\n\n\n\n ");
			printf(" Veuillez renseignner les informations suivantes :\n\n");
			printf("\t\t\t*Nombres des mots * \t\t\t\t *Nombres de characteres des mots*\n\n\n");

		} while (nbChar < 4 || nbChar>8);



		printf("\n\n 0.Retour <<<---\t\t\t\t\t\t\t\t\t 1.Suivant --->>> ");
		int c2;
		scanf("%d",&c2);
		if (c2 == 0) { cls(); acceuil(); }
		else {
			cls();
			printf("\n\n\t\t\t\t\t =========== DEMARRAGE  ==========\n\n\n\n ");
			printf(" Debut du jeu dans :\n\n");


			// boucle pour afficher les sécondes en console 
			for (int i = 9; i >= 0; i--)
			{
				// code C qui permet de rétarder l'affichage d'une seconde équivalent à 1000 millisecondes pour une seconde
				Sleep(1000);
				printf("\r\t\t\t\t\t\t\t%d", i);

			}
			printf(" GO !");
			cls();
			printf("\n\n\t\t\t\t\t========== DEMARRAGE  ==========\n\n\n\n ");
			char* tab = (char*)malloc(nbChar + 1); // +1 pour le caractère nul
			char* user = (char*)malloc(nbChar + 1); // +1 pour le caractère nul
			srand((unsigned int)time(0));
			fgets(conten, 50, fichier);
			conten[strcspn(conten, "\n")] = 0; // Retirer le caractère de nouvelle ligne
			int r;
			int ind = 0;
			clock_t temps = clock(); int good = 1;
			for (int m = 1; m <= nbMots; m++)// boucle pour générer les nombres mots 
			{
				for (int i = 0; i < nbChar; i++) // boucle pour générer les nombres des characteres dans le mot 
				{
					ind = rand() % strlen(conten); // strlen : recupère la taille de la chaine
					tab[i] = conten[ind];
				}
				tab[nbChar] = '\0'; // Ajouter le caractère nul à la fin, délimite le tableau

				printf("\t\t\t%s\n", tab);
				printf("\tA vous le clavier : ");
				scanf("%s", user); // Utiliser %s sans _s si vous ne vérifiez pas la taille
				r = strcmp(tab, user);// compare si les deux chaines sont les même et renvoie 0 si elles sont identiques sinon 1
				if (r == 0)
				{
					good++;
					printf("\tMots : %d\n", good);
				}
				else if (r == 1)
				{
					while (r == 1)
					{
						system("cls");
						printf("\n\n\t\t\t\t\t========== DEMARRAGE  ==========\n\n\n\n ");
						printf("\t\t\t%s\n", tab);
						printf("\tMauvaise saisie : ");
						scanf_s("%s", user);
						r = strcmp(tab, user);
					}
				}
			}
			clock_t end = clock();

			double min = (double)((end - temps) / CLOCKS_PER_SEC);
			p1.time = min;
			cls();
			printf("\n\n\n\t\t\t\t Joueur/joueuse n*2 : preparez-vous !");
			Sleep(5000);
			printf("\n\n\t\t\t\t\t========== DEMARRAGE  ==========\n\n\n\n ");

			clock_t temps2 = clock();  good = 1;
			for (int m = 1; m <= nbMots; m++)// boucle pour générer les nombres mots 
			{
				for (int i = 0; i < nbChar; i++) // boucle pour générer les nombres des characteres dans le mot 
				{
					ind = rand() % strlen(conten); // strlen : recupère la taille de la chaine
					tab[i] = conten[ind];
				}
				tab[nbChar] = '\0'; // Ajouter le caractère nul à la fin, délimite le tableau

				printf("\t\t\t%s\n", tab);
				printf("\tA vous le clavier : ");
				scanf("%s", user); // Utiliser %s sans _s si vous ne vérifiez pas la taille
				r = strcmp(tab, user);// compare si les deux chaines sont les même et renvoie 0 si elles sont identiques sinon 1
				if (r == 0)
				{
					good++;
					printf("\tMots : %d\n", good);
				}
				else if (r == 1)
				{
					while (r == 1)
					{
						system("cls");
						printf("\n\n\t\t\t\t\t========== DEMARRAGE  ==========\n\n\n\n ");
						printf("\t\t\t%s\n", tab);
						printf("\tMauvaise saisie : ");
						scanf_s("%s", user);
						r = strcmp(tab, user);
					}
				}
			}
			clock_t end2 = clock();

			double min2 = (double)((end2 - temps2) / CLOCKS_PER_SEC);
			p2.time = min2;

			free(user);
			free(tab);
			cls();
			if (p1.time < p2.time)
			{
				printf("\n\n\n\t\t\t\t\t%s : Vous etes plus rapide que %s \n", p1.pre, p2.pre);
				printf("\n\n\t\t\t\tAvec un temps de : %.0f secondes contre %.0f secondes de : %s ", p1.time, p2.time, p2.pre);
			}
			else if (p1.time > p2.time)
			{
				printf("\n\n\n\t\t\t\t\t%s : Vous etes plus rapide que %s \n", p2.pre, p1.pre);
				printf("\n\n\t\t\t\tAvec un temps de : %f secondes contre %f secondes de : %s ", p2.time, p1.time, p1.pre);
			}
			else
			{
				printf("\n\n\n\t\t\t%s et %s : etes tous execo ! avec respectivement chacun temps de : ", p1.pre, p2.pre);
				printf("\n\n\t\t\t%f secondes et %f secondes ", p1.time, p2.time);
			}

			fclose(fichier);
			Sleep(7000);
			cls();
			acceuil();
		}
	}
}

void configurer()
{

	char file[40];
	printf("\n\n\tVoulez-vous apporter des modifications au fichier qui porte les mots du jeu ?\n\n");
	printf("\t\t0.Non\t\t\t\t\t\t1.Oui :");
	int rep;
	scanf("%d",&rep);
	switch (rep)	
	{
	case 0:cls(); acceuil(); break;
	case 1: cls(); printf("\n\n\n\tveuillez saisir le nom du fichier a charger avec moins de 40 charactères :");
		scanf("%s",mainF);
		cls();
		acceuil();
	default:
		printf("\n\n\t\t\t\t\t\ Commande inconnue "); cls(); configurer();
		break;
	}
}

void aide()
{
	FILE* file = fopen("help.txt", "r");

	if (file == NULL) { printf("erreur d'ouverture"); }
	else
	{
		char help[2];
		while (fgets(help, 2, file))
		{
			printf("%s", help);
		}
		Sleep(5000);
		printf("\n\t\t\t\t <<- 0.Retour :");
		int c;
		scanf_s("%d", &c);
		switch (c)
		{
		case 0:cls(); acceuil(); break;
		default:cls(); aide(); break;
		}
	}
	fclose(file);

}
int main()
{
	// message.....
	printf("\n\n\t\t\t\t\t**************UDBL-DACTILOGICIEL**************\n\n\n\n\n\n");
	//printf("\t\tMAJILA MULUMBWA DANNY \n\t\tKALOBA KILAKA PIERETTE\n\t\tKAPOYA MABANZA EBEN\n\t\tKAZADI FUNDI JEAN-MARC");
	printf("\t\tMAJILA MULUMBWA DANNY\n");
	Sleep(2000);
	printf("\t\tKALOBA KILAKA PIERETTE\n");
	Sleep(2000); 
	printf("\t\tKAPOYA MABANZA EBEN\n");
	Sleep(2000);
	printf("\t\tKAZADI FUNDI JEAN-MARC");

	Sleep(7000);// attente de 10 secondes avant le lancement de l'écran d'acceuil
	cls();
	acceuil();
	// faites appelle aux procédures configurer et aide une fois le code écris correctement ou presque
	return 0;
}