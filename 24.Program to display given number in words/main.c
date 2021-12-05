
#include<stdio.h>

void main()

{
    
  int n;
  printf("Enter a num b/w 1−5\n");
  scanf("%d", &n);

  if (n == 1) 
  {
    printf("One\n");
  } 
  else if (n == 2) 
  {
    printf("Two\n");
  } 
  else if (n == 3) 
  {
    printf("Three\n");
  } 
  else if (n == 4) 
  {
    printf("Four\n");
  } 
  else if (n == 5) 
  {
    printf("Five\n");
  } 
  else 
  {
    printf("INVALID");
  }

}
