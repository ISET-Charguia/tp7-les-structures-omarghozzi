/*
 ============================================================================
 Name        : tp7ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct {
	char nom[5];
	char date[10];
	char nation[15];
	char sexe[6];
} jouer;

void main() {
	const int max = 100;
	jouer t[max];

	int n;
	printf("donner le nombre du joueur ");
	scanf("%d", n);
	for (int i = 0; i < n; i++)
	{
		printf("nom %d", i);
		scanf("%s", t[i].nom);
		printf("date %d", i);
		scanf("%s", t[i].date);
		printf("nationamity %d", i);
		scanf("%s", t[i].nation);
		printf("sexe %d", i);
		scanf("%s", t[i].sexe);
	}
	for(int i=0;i<n;i++)
	{
		if(t[i].nation=="Tunisienne")
		{
			printf("%s \n",t[i].nom);
			printf("%s \n",t[i].date);
			printf("%s \n",t[i].nation);
			printf("%s \n",t[i].sexe);

		}
	}
}
