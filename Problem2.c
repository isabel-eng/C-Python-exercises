//2. Write a program to check whether a number is even or odd.
#include <stdio.h>

int main(){
    //ask to the user for a number
    int number;
    scanf("%d", &number);
    //use a ternary operator to check and print if the number is odd or even
    number%2 == 0 ? printf("even number\n") : printf("odd number\n");
}