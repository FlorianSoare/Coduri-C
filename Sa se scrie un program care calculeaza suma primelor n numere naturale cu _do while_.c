#include<stdio.h>

void main()
{
 int n, s=0, i=1; /* cerem sistemului un numar intreg n si definim s ca fiind 0 si i ca fiind 1 */
 printf("Introduceti n:"); /* afisam mesajul prin care cerem operatorului valoarea lui n */
 scanf("%d",&n); /* citim numarul introdus de operator si il atribuim lui n */
 
do /* apelam instructiunea do - realizeaza */
 {
	s+=i;   //s=s+i; 
	i++;
 }
  while(i<=n) ;/* atata timp cat i este mai mic sau egal cu n repetam pasii de mai sus */
 
 printf("Suma primelor %d numere naturale este: %d\n",n,s); /* afisam suma primelor n numere naturale */
 
	getchar();
	int k;
	scanf("%d", k);
}
