#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];

    puts("Enter the first string:");
      gets(str1);
    puts("Enter the second string :");
      gets(str2);

    printf("\nLength of the string str1: %d\n" ,strlen(str1));

    printf("\nLength of the string str2: %d\n" ,strlen(str2));

    if(strcmp(str1,str2)==0)

    printf("\nstr1 & str2 are equal\n");

    else

    printf("\nstr1 & str2 are different\n");

    strcat(str1,str2);
      printf("\nThe concatenated string is: %s\n",str1);

    strcpy(str1,str2);
      printf("\nStr1 after cpoying: %s\n",str1);
}

