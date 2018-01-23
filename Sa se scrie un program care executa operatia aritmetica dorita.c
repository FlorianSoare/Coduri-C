#include<stdio.h>
void main()
{	
int a,b; /* cerem sistemului sa tina cont de doua variabile intregi a si b */
	printf("Introduceti a: ");  /*cerem operatorului primul numar a  */
	scanf("%d", &a); /*citim de la operator/prompter primul numar a  */
	printf("Introduceti b: "); /*cerem operatorului al doilea numar b  */
	scanf("%d", &b);/*citim de la operator/prompter al doilea numar b  */
	char x;
	getchar();
	printf("Introduceti operatia dorita (+ - * /): "); /*cerem operatorului operatia dorita cu cele doua numere  */
    	scanf("%c", &x);
 	switch(x)
	{
		case '+': printf("a+b= %d", a+b); break; /* daca este ales semnul + atunci se efectueaza operatia de adunare  */
		case '-': printf("a-b= %d", a-b); break; /* daca este ales semnul - atunci se efectueaza operatia de scadere  */
		case '/': printf("a/b=%.2f",a/(float)b); break; /* daca este ales semnul / atunci se efectueaza operatia de impartire  */
		case '*': printf("a*b= %d", a*b); break; /* daca este ales semnul * atunci se efectueaza operatia de inmultire  */
		default: printf("Operatie necunoscuta"); /* daca este ales orice alt semn se afiseaza mesaj de eroare  */
	}
	getchar();
	int k;
	scanf("%d", k);
}
