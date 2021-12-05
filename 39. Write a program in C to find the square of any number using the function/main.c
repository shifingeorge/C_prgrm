
// c program to find the square of any number using the function

#include <stdio.h>

float square(float num) //func to find the square

{
    return (num * num);
}

int main()              //main func

{
    float num;
    float n;
     
    printf("Input any number for square : ");
    scanf("%f", &num);
            
    n = square(num);    //calling the func
    
    printf("The square of %.2f is : %.2f\n", num, n); 
    return 0;
}

