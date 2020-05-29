//5. Write a program that display the Zodiacal Sign using the day and month of birth.
#include <stdio.h>

int main(){
    int mes = 13;
    int dia = 32;
    //ask the user for a birth day
    while (mes < 1 || mes > 12){
        printf("Mes: ");
        scanf("%d", &mes);
    }
    while (dia < 1 || dia > 31){
        printf("Dia: ");
        scanf("%d", &dia);
    }
    //a switch case is used combined with a ternary operator to check when the criteria is met
    switch (mes){
    case 1:
        dia <= 19 ? printf("Capricornio\n    ♑\n") : printf("Acuario\n    ♒\n");
        break;
    case 2:
        dia <= 18 ? printf("Acuario\n    ♒\n") : printf("Piscis\n    ♓\n");
        break;
    case 3:
        dia <= 20 ? printf("Piscis\n    ♓\n") : printf("Aries\n    ♈\n");
        break;
    case 4:
        dia <= 19 ? printf("Aries\n    ♈\n") : printf("Tauro\n    ♉\n");
        break;
    case 5:
        dia <= 20 ? printf("Tauro\n    ♉\n") : printf("Geminis\n    ♊\n");
        break;
    case 6:
        dia <= 20 ? printf("Geminis\n    ♊\n") : printf("Cáncer\n    ♋\n");
        break;
    case 7:
        dia <= 22 ? printf("Cáncer\n    ♋\n") : printf("Leo\n    ♌\n");
        break;
    case 8:
        dia <= 22 ? printf("Leo\n    ♌\n") : printf("Virgo\n    ♍\n");
        break;
    case 9:
        dia <= 22 ? printf("Virgo\n    ♍\n") : printf("Libra\n    ♎\n");
        break;
    case 10:
        dia <= 22 ? printf("Libra\n    ♎\n") : printf("Escorpio\n    ♏\n");
        break;
    case 11:
        dia <= 21 ? printf("Escorpio\n    ♏\n") : printf("Sagitario\n    ♐\n");
        break;
    case 12:
        dia <= 21 ? printf("Sagitario\n    ♐\n") : printf("Capricornio\n    ♑\n");
        break;
    }
}