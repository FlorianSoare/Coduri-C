//Tema 2.1. Cititi de la tastatura un numar întreg. Afisati cifrele din care se compune numarul. Discutii: În ce ordine putem afisa cifrele?

#include <stdio.h>
#include <stdlib.h>

//cerem un numar intreg de la operator
braker(){

printf("Avem nevoie de un numar intreg pentru efectuarea exercitiului\n");
int a,c;
scanf("%d",&a);
	while(a!=0){  //cat timp a este diferit de 0
		c=a%10;   //spunem ca c este catul impartirii lui a la 10
		a=a/10;   //si a devine mai mic cu o cifra - se renunta la ultima cifra componenta
		printf("%d\n",c);  //afisam cifrele ce compun numarul - catul impartirii lui a la 10
	}
return 0;	
}


//numerele se afiseaza de la ultima cifra la prima

int main(){
	braker();
	
}
