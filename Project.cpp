#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int Ajout()
{
	FILE *fp;
	int telephone;
	char surname[20], prenom[20], mail[35];
	fp= fopen("repertoire.txt","a+");
	printf("						~~~~~~~~~~~~~~~~~~~~~~Ajout d\'un utilisateur~~~~~~~~~~~~~~~~~~~~~~\n");
	srand(time(NULL));
	int ID = rand()%100 + 1;
	printf("									Votre ID est :");
	printf(" %d\n",ID);
	printf("\n									Nom : ");
	scanf("	%s", &surname);
	printf("\n									Prenom : ");
	scanf("	%s", &prenom);
	printf("\n									Telephone : ");
	scanf("	%d", &telephone);
	printf("\n									Mail : ");
	scanf("%s", &mail);
	printf("						~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		
	fprintf(fp,"\n%d\t\t\t\t%s\t\t\t%s\t\t\t0%d\t\t %s", ID, surname, prenom, telephone, mail);	
}

int Afficher()
{
	FILE *fp;
	fp= fopen("repertoire.txt","r");
		int c = fgetc(fp);
		while (c != EOF)
		{
			printf("%c",c);
			c = fgetc(fp);
		}
}

int Rechercher()
{
		
}

int Supprimer()
{
	
}

int Tout_supprimer()
{
	FILE *fp;
	fp=fopen("repertoire.txt","w");
	fclose(fp); 
	printf("Le contenu du repertoire a ete supprime");
	fp=fopen("repertoire.txt","a+");
	fprintf(fp,"Identifiant			Nom			Prenom			Telephone		Mail");
}

int main()
{
	FILE *fp;
	char choix;
	printf("							~~~~~~~~~~~~~~~~~~~~~~ MENU ~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("							(1) 	Ajouter une personne dans le repertoire");
	printf("\n							(2) 	Afficher le contenue du repertoire");
	printf("\n							(3)	Rechercher une personne dans le repertoire");
	printf("\n							(4)	Supprimer une personne du repertoire");
	printf("\n							(5)	Supprimer le repertoire\n");
	printf("							~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	scanf("%c",&choix);
	getchar();
	
	if (choix == '1')
	{
		Ajout();	
	}
	
	if (choix== '2')
	{
		Afficher();
	}
	
	
	if (choix == '3')
	{
		Rechercher();
	}	
	
	if (choix == '4')
	{
		Supprimer();
	}
	
	if (choix =='5')
	{
		Tout_supprimer();
	}
}

