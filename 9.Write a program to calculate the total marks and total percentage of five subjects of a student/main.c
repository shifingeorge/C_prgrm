#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,s=0,p;
    printf("Enter the marks of 5 sub out of 50\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    s = s1+s2+s3+s4+s5; //total sub
    p = s * 100;
    p = p / 250 ; //total percentage
    char c = '%';
    printf("Total marks of student is %d\n", s);
    printf("Total percentage of student is %d%c",p,c);
    return 0;
} 
