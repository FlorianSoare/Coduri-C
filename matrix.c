#include<stdio.h>
#include<stdlib.h>
/*aceasta functie creeaza efect binar de matrix*/
biti(){
	int n,i,r;
	printf("Afisez 1 milion de valori dupa cum urmeaza: \n",n);
	srand (time(NULL));
	n=1000000;
			for(i=1;i<=n;i++){
								r=rand()%2+0;
								printf("%d ",r);
							}
	
	
}



int main(){
	
	biti();
	
}
