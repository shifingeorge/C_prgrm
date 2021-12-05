
//C program to check armstrong and perfect numbers using the Function

#include <stdio.h>
 
int chkArms(int n)   //Checks whether a three dig num is Armstrong num

{
    int d, s, num;
    s = 0;
    num = n;
    while(num!=0)  
    {  
        d = num % 10;        
        s += d * d * d;     
        num = num/10;  
    }
    return (n == s);
}

int chkPerf(int n)     // Checks whether the number is perfect number or not
{
    int i, s, num;
    s = 0;
    num = n;
    for(i=1; i<num; i++)  
    {  
        if(num%i == 0)  
        {  
            s += i;  
        }  
    }
    return (n == s);
}

int main()

{
    int n;
     
    printf(" Input any number: ");
    scanf("%d", &n);
     
    if(chkArms(n))       //Calls the function
        {
            printf(" The %d is an Armstrong number.\n", n);
        }
        
    else
        {
            printf(" The %d is not an Armstrong number.\n", n);
        }
     
    if(chkPerf(n))         //Calls the function
        {
            printf(" The %d is a Perfect number.\n\n", n);
        }
        
    else
        {
            printf(" The %d is not a Perfect number.\n\n", n);
        }
        
    return 0;
}
