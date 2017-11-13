#include <stdio.h>
#include <math.h> /* cerem sistemului libraria de math.h */
void main (void)
{
	int a,b,c; /* cerem sistemului trei constante intregi */
	float x1,x2,d; /* definim radacinile x1, x2 si delta ca valori in asteptare*/
	printf("Introduceti coeficientii ecuatiei.\n"); /* cerem operatorului sa introduca cei trei coeficienti ai ecuatiei de gradul II */
	printf("\ta="); scanf("%d",&a); /* afisam mesajul a= si citim valoarea lui a */
	printf("\tb="); scanf("%d",&b); /* afisam mesajul b= si citim valoarea lui b */
	printf("\tc="); scanf("%d",&c); /* afisam mesajul c= si citim valoarea lui c */
	if(!a) //a==0 /* daca a este egal cu 0 */
		if(!b)      /* daca b este egal cu 0 */
			if(!c)    /* daca c este egal cu 0 */
				printf("Ecuatia are o infinitate de solutii."); /* cand a=b=c=0 atunci exista o infinitate de solutii */
			else
				printf("Ecuatia nu are nici o solutie."); /* cand c=0 ecuatia nu are nici o solutie - afisam acest mesaj */
		else
			{
			x1=-c/(float)b; /* cand c este diferit de 0 si a egal cu 0 putem calcula x1 */
			printf("Solutia ec. este: %.2f.",x1); /* afisam valoarea lui x1 */
			}
	else
		x1=-c/(float)b; /* cand c este diferit de 0 si a egal cu 0 putem calcula x2 */
		printf("Solutia ec. este: %.2f.",x1); /* afisam valoarea lui x2 */
 
		{
			d=b*b-4*a*c; /* cand a si b si c sunt diferite de 0 putem calcula delta */
			if(d<0) /* daca delta este mai mic decat 0 */
				printf("Ec nu are solutii reale."); /* cand delta este mai mic decat 0 nu avem solutii reale si afisam acest mesaj */
			else /* altfel, cand delta este mai mare decat 0, putem calcula solutii */
				{
				x1=(-b-sqrt(d))/2*a; /* lasam ca x1 sa ia valoarea precizata in functie de b, delta si a */
				printf("Solutiile sunt:\n\tx1 este: %.2f\n",x1); /* afisam valorea lui x1 */
				x2=(-b+sqrt(d))/2*a; /* lasam ca x2 sa ia valoarea precizata in functie de b, delta si a */
				printf("\tx2 este: %.2f\n",x2);  /* afisam valorea lui x1 */
				}
		}
 
	getchar();
	int k;
	scanf("%d", k);
}
