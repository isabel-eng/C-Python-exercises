#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    //save the numbers from the user
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    //check if one number is greater than the others
    if(num1 > num2)
    {
        if(num1 > num3){
            max = num1;
        }else{
            max = num3;
        }
    }else{
        if(num2 > num3){
            max = num2;
        }else{
            max = num3;
        }
    }
    
    // Print maximum value
    printf("The maximum number is = %d", max);

    return 0;
}
