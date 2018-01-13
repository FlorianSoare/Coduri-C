#include<stdio.h>
/*aceasta functie doar numara pana la un numar introdus la tastatura*/
numarator(){
	int n,i;
	printf("Introdu pana la ce numar vrei sa numar: ");
	scanf("%d",&n);
	
	for (i=0;i<=n;i++){
		printf("%d\n",i);
	}
	
}


int main(){
	
	numarator();
}
