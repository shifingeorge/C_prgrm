#include <stdio.h>

int main()
{
    int ag , w;
    printf("Enter your age :\n");
    scanf("%d", &ag);
    printf("Enter your Weight :\n");
    scanf("%d", &w);
    
    if (ag > 18 && ag < 56 && w > 45 )
    
    {
        printf("       ....=====.... CONGRATS ....=====....\n");
        printf("       You are eligibe for blood donation");
    }
    
    else 
    
    {
        printf("       ==== SORRY ===\n");
        printf("       You can't donate");
    }
    
    return 0;
}

