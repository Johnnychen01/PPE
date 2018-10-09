#include <stdio.h>
#include <stdlib.h>

#define NLIGNES 1000

int main (void)
{
	FILE *fp;
	char choix;
	printf("\tSaisir a pour ajouter une personne dans le repertoire");
	printf("\n\tSaisir b pour afficher le contenue du repertoire");
	printf("\n\tSaisir c pour rechercher une personne dans le repertoire");
	printf("\n\tSaisir d pour supprimer une personne du repertoire");
	printf("\n\tSaisir e pour supprimer le repertoire\n");
	scanf("%c",&choix);
	getchar();
	
	if (choix == 'a')
	{
		int p;
		char ID[20], nom[20], prenom[20], mail[35];
		fp= fopen("repertoire.txt","a+");
		
		printf("Identifiant :");
		scanf("%s", &ID);
		printf("\nNom : ");
		scanf("%s", &surname);
		printf("\nPrenom : ");
		scanf("%s", &prenom);
		printf("\nTelephone : ");
		scanf("%d", &p);
		printf("\nMail : ");
		scanf("%s", &mail);
		
		fprintf(fp,"\n%s\t\t\t\t%s\t\t\t%s\t\t0%d\t\t %s", ID, surname, prenom, p, mail);		
	}
	
	if (choix== 'b')
	{
		fp= fopen("repertoire.txt","r");
		int c = fgetc(fp);
		while (c != EOF)
		{
			printf("%c",c);
			c = fgetc(fp);
		}
	}

	if (choix == 'c')
	{
		
	}
	
	if (choix == 'd')
	{
	}
	
	if (choix =='e')
	{
		fp=fopen("repertoire.txt","w");
		fclose(fp); 
		fp=fopen("repertoire.txt","a+");
		fprintf(fp,"1-Identifiant			2-Nom			3-Prenom			4-Telephone		5-Mail");
	}
}
