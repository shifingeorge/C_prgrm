
//C program to check even or odd using functions

#include <stdio.h>

int isEven(int num)         // Func to check even or odd

{                           //Returns 1 if num is even otherwise 0
    if(num%2 == 0)
        return 0;
        
    else
        return 1;
}

int main()

{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(isEven(num) == 0)
        printf("The number is even.");
    
    else
        printf("The number is odd.");
    
    return 0;
}
