#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <stdio.h>


void transformation(char *chaine) {
	int i = 0;

	for (i = 0; chaine[i] != '\0'; i++) {
		if (chaine[i] >= 'A' && chaine[i] <= 'Z')
			chaine[i] = chaine[i] - 'A' + 'a';
	}

	printf("Voici la chaine convertie : %s .\n", chaine);
}

int main(int argc, char *argv[]) {

	char str[100];

	printf("Entrez la chaine a convertir : ");
	scanf("%s", str);

	transformation(str);

	return 0;
}
