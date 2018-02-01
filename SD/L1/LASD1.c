#include<stdio.h>

#include<stdlib.h>





/* exercitiul 1 :generator de trei numere random */

random() {

printf("%d %d %d\n",rand(),rand(),rand());

return 0 ;
/*se observa ca valorile sunt aceleasi ? */
}


#include<time.h> // ! ! ! !
/* includem time.h si putem face functia random sa fie dependenta de timp
Astfel valorile vor diferi la fiecare rulare a programului */

randomseed() {

    srand(time(NULL)); /*srand este seed-rand care executa aleator in functie de timp*/ 

    printf("%d %d %d\n",rand(),rand(),rand());

return 0 ;

}

/* o functie ce returneaza un numar aleator de la 1 la o valoare n ceruta de aplicatie */
random1n(){
	int n;
	printf("Introdu o valoare: ");
	scanf("%d", &n);
	printf ("O valoare aleatoare de la 1 la %d este %d",n,rand()%n+1);
	
	return 0;
	
}




int main(){
	random();
	randomseed();
	random1n();
}
