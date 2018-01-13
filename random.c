#include<stdio.h>
#include<stdlib.h>
/*aceasta functie afiseaza doar numere aleatorii*/

random(){


int i,n,r;
printf("De cate numere aleatorii ai nevoie ? ");
scanf("%d",&n);

printf("Numerele aleatorii sunt in ordine dupa cum urmeaza: \n");
	srand (time(NULL));
for (i=0;i<=n;i++){

	r=rand();

	printf("%d----->   %d \n",i,r);
	
	}
}

random_marja(){

printf("Sa complicam putin lucrurile ....................\n ");
int i,n,r,m;
printf("De cate numere aleatorii ai nevoie ? \n");
scanf("%d",&n);
printf("Numerele sa fie de la zero la  :");
scanf("%d",&m);
printf("Afisam %d numere aleatorii de la zero la %d dupa cum urmeaza: \n ",n,m );

srand(time(NULL));
for (i=0;i<=n;i++){
	r=rand() %m +1;
	printf("%d ------------> %d \n",i,r);
	}
	
}

int main(){
	
	random();
	random_marja();	
}

