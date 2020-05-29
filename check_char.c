/* Write a program to input any character and check whether it is alphabet, digit or
special character. 
*/

#include <stdio.h>
//save the character in a char called c
int main(){
    char c;
    printf("Type a character: ");
    scanf("%c",&c);
//check if the character is part of the alphabet first
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        printf(" %c is an alphabet", c);
//if not, check if is a number     
    } else if (c>= '0' && c <= '9'){
        printf(" %c is a digit",c);
//if not, we'll know that is a special character
    } else {
        printf(" %c is a special character",c);
    }
return 0;
}
