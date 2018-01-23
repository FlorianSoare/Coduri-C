#include<stdio.h>

void main()
{
 int n, s=0, i=1; /* cerem sistemului un numar intreg n si doua numere cu valoare cunoscuta */
 printf("Introduceti n:"); /* cerem operatorului o valoare pe care o atribuim lui n */
 scanf("%d",&n); /* citim de la prompter/operator valoarea n pe care o vom folosi in continuare */
 
 while(i<=n) /* atat timp cat i este mai mic sau egal cu n */
 {
	s+=i;   //s=s+i; /* suma este egala cu suma plus pas 1 */
	i++;    /* i creste unitar pana cand i devine egal cu n si apoi vom iesi din bucla */
 }
 
 printf("Suma primelor %d numere naturale este: %d\n",n,s); /* afisam rezultatul sumei primelor n numere naturale */
 
	getchar();
	int k;
	scanf("%d", k);
}
