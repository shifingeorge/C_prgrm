#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,s;
    float p,q;
    printf("Enter the marks of 5 sub out of 50\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    s=s1+s2+s3+s4+s5;//total sub
    q = s/250 ;
    p = q * 100;//total percentage
    char c = '%';
    printf("Total marks of student is %d\n", s);
    printf("Total percentage of student is %.2f%c",p,c);
} 
