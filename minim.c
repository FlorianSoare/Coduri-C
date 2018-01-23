/*Script pentru aflarea celui mai mic numar din doua numere introduse de la tastatura*/


#include <stdio.h>

int main()
{
    //determinam elementul de valoare minima

    int a, b; //definim doua numere a si b
    printf("introduceti a si b:\n"); //cerem de la utilizator doua numere a si b
    scanf("%d %d", &a, &b); //citim numerele introduse
    if(a>b) //comparam cele doua numere 
        printf("%d este mai mic decat %d", b, a); // daca a este mai mare decat b 
        else if(a<b)
        printf("%d este mai mic decat %d", a, b); // daca b este mai mare decat a
            else
            printf("numerele sunt egale"); // numerele pot fi si egale ... nu ?

    return 0;
}
