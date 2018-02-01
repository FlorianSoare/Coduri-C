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

    srand(time(NULL));

    printf("%d %d %d\n",rand(),rand(),rand());

return 0 ;

}




int main(){
	random();
	randomseed();
	
}
