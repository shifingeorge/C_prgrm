#include <stdio.h> 
int main()
  {

    char ch;
    printf("Enter a letter from VIBGYOR :\n");
      scanf("%c",&ch);

    switch(ch)
    {

      case 'V':
          printf("----Violet----\n");
          break;

      case 'I':
          printf("----Indigo----\n");
          break;

      case 'B':
          printf("----Blue----\n");
          break;

      case 'G':
          printf("----Green----\n");
          break;

      case 'Y':
          printf("----Yellow----\n");
          break;

      case 'O':
          printf("----Orange----\n");
          break;

      case 'R':
          printf("----Red----\n");
          break;

      default:
      printf("Not a color letter from VIBGYOR \n");
    }
}

