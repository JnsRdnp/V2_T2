#include <stdio.h>
#include <stdbool.h>

//Ohjelma, joka kysyy käyttäjältä kaksi lukua ja tulostaa niistä
//suuremman

int main()
{
    int a;
    int b;

    printf("Anna ohjelmalle kaksi lukua\n");
    printf("Ensimmainen numero: ");
    scanf("%d",&a);
    printf("Toinen numero: ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("Annoit ohjelmalle numerot %d ja %d, joista %d on suurempi\n",a,b,a);
    }
    else if(a<b)
    {
        printf("Annoit ohjelmalle numerot %d ja %d, joista %d on suurempi\n",a,b,b);
    }
    else
    {
        printf("Numerot %d ja %d ovat yhtasuuria\n",a,b);
    }

}
