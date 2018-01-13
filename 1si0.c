#include<stdio.h>
#include<stdlib.h>
/*aceasta functie scrie un sir aleator de 1 si 0*/
biti(){
	int n,i,r;
	printf("Cat de mare sa fie sirul : ");
	scanf("%d",&n);
	printf("Afisez %d valori dupa cum urmeaza: \n",n);
	srand (time(NULL));
			for(i=1;i<=n;i++){
								r=rand()%2+0;
								printf("%d ",r);
							}
	
	
}



int main(){
	
	biti();
	
}
