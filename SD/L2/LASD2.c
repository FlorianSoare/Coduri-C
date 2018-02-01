#include <stdio.h>
#include <stdlib.h>

//2.1 Specificarea tipului de data a variabilelor 

/* Declararea variabilelor */

float a,b; 		// am declarat doua variabile a, b de tip float (reale cu virgula mobila)
double c,d; 	//am declarat doua variabile c, d de tip double (reale cu virgula mobila)
int e; 			//am declarat o variabila e de tip numar intreg
char ch; 		//am declarat caractere sau siruri de caractere

//2.2 Citirea si afisarea datelor

/* Cerem de la utilizator datele ce trebuiesc apoi afisate */
citire(){
	printf ("Introducem o valoare pe care sa o afisam: "); //afisare mesaj de dialog
	scanf("%d",&e); //citim valoarea introdusa de utilizator
	printf("Doar ce ai introdus valoarea %d\n",e); //afisam valoarea pe care am citit-o
	
}
/* Cerem de la utilizator trei numere si afisam numarul cel mai mare dintre ele */

maxim(){
	printf("\nSa calculam care este cel mai mare numar dintre trei valori \nIntrodu te rog trei valori diferite mai jos \n");
	int s,t,u; //Declaram trei variabile intregi
	printf("Prima valoare: ");
	scanf("%d",&s);
	printf("A doua valoare: ");
	scanf("%d",&t);
	printf("A treia valoare: ");
	scanf("%d",&u);
	if (s>u&&s>t) //pentru prima valoare mai mare decat a doua si mai mare decat a treia
			printf("\nCel mai mare numar dintre cele trei valori este %d",s); //afisam mesajul ca valoarea cea mai mare este prima
	else if (t>s && t>u) // pentru a doua valoare care este mai mare decat prima si mai mare decat a treia
			printf("\nCel mai mare numar dintre cele trei valori este %d",t);//afisam mesajul ca valoarea cea mai mare este a doua
	else if (u>s && u>t)// pentru a treia valoare mai mare decat prima si decat a doua
			printf("\nCel mai mare numar dintre cele trei valori este %d",u);//afisam mesajul ca valoarea cea mai mare este a treia
	else if (s==u||s==t||t==u)//pentru oricare valoare care se repeta
			printf("Ai introdus o valoare care se repeta si am cerut valori diferite");//afisam un mesaj de eroare
	
	//observam ca functia aduce mesajul de egalitate daca valorile mari se repeta
	
}


/* Cerem de la utilizator doua numere si le adunam*/

suma(){
	int s,x,y;
	printf("\nSa calculam acum suma a doua numere");
	printf("\nIntrodu primul numar: ");
	scanf("%d",&x);
	printf("\nIntrodu al doilea numar: ");
	scanf("%d",&y);
	s=x+y;
	printf("\nSuma numerelor %d si %d este %d",x,y,s);
	
}

//2.3 Atribuim valori unor variabile

attrib(){
	//regula celor trei pahare
int a,b,aux;
printf("\nSa incercam sa sucim niste cifre prin atribuire.\nIntrodu te rog doua valori mai jos: \n");
scanf("%d%d",&a,&b);
aux=a; //atribuim variabilei aux valoarea lui a
a=b;   //atribuim valoarea lui a lui b
b=aux; //atribuim lui b valoarea lui aux
	printf("\nPrima valoare introdusa a devenit %d iar a doua a devenit %d\n",a,b);
}

//2.4 Sa se citeasca de la tastatura un numar intreg si sa se decida daca este par
partas(){
	int p;
	printf("\nSa verificam daca introduceti un numar par\n");
	scanf("%d",&p);
	if (p%2==0) printf("Ati introdus un numar par ! %d ESTE PAR !",p);
		else	printf("Nu ati introdus un numar par ! %d NU este PAR! ",p);
	
}

//2.5 Sa se citeasca de la tastatura doua numere intregi sa sa se stabileasca cea mai mica valoare
minim(){
	int m,n;
	printf("\nSa verificam minimul dintre doua valori\nIntroduceti doua valori mai jos\n");
	scanf("%d%d",&m,&n);
	if (m>n) printf("Numarul %d este mai mic decat numarul %d",n,m);
	else if (n>m) printf("Numarul %d este mai mic decat numarul %d",m,n);
	else printf ("Cele doua valori %d si %d sunt egale",m,n);
	
	
}


//2.6 Sa se citeasca de la tastatura trei numere intregi si sa se stabileasca cea mai mare valoare

maxa(){
	int a,b,c,max;
	printf("\nSa verificam din nou cea mai mare valoare dintre trei valori date\nIntroduceti trei valori mai jos\n");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	printf("\nMaximul este %d",max);
	
}

int main(){
citire();
maxim();
suma();
attrib();
partas();
minim();
maxa();
}
