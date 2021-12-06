#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>	

int main() {

	int i = 0;
	char str[100] = {0};

	for (i = 0; (str[i] = _getch()) != '\r'; i++)
	printf("*");

	printf("\n Le mot de passe est : %s", str);

	return 0;
}

/* 

Ecrire une fonction mot_de_passe permettant de saisir dans une chaîne de caractères passée
en argument un mot de passe. Pour que ce mot de passe soit gardé secret, vous ferez en sorte
qu’à chaque appui sur une touche, on fasse apparaître une étoile.
Dans le programme principal, vous appellerez la fonction mot de passe puis vous afficherez le
mot de passe réel.
NB : Utiliser la fonction getch() permet de lire la valeur à stocker dans la chaîne.
Pour finir la saisie, appuyez sur la touche « ENTREE », qui possède le code ASCII 13.

*/