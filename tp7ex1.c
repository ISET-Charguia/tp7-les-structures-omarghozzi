/*
 ============================================================================
 Name        : tp7ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int ns;
	char tcpu[5];
	int vitcpu;
	int tailmem;
} proc;

void main() {
	proc t[1];
	proc max1;
	int j=0;
	for (int i = 0; i < 2; i++) {
		printf("numero de serie %d \n", i);
		scanf("%d", &t[i].ns);
		printf("type de processeur %d \n", i);
		scanf("%s", &t[i].tcpu);
		printf("vit de processeur %d \n", i);
		scanf("%d", &t[i].vitcpu);
		printf("taille mem %d \n", i);
		scanf("%d", &t[i].tailmem);
	}
	max1 = t[0];

	for (int i = 0; i < 2; i++) {
		if (t[i].vitcpu > max1.vitcpu)
			max1 = t[j=i];

	}
	//for (int i = 0; i < 2; i++) {
		//if (t[i].vitcpu == max1) {
			printf("l'ordinateur %d est plus rapide car \n",j);
			printf("%d \n", max1.ns);
			printf("%s \n", max1.tcpu);
			printf("%d \n", max1.vitcpu);
			printf("%d \n", max1.tailmem);
		//}
	//}

}
