#include <stdio.h>

int main()
{
    int calls;
    float bill;

    printf("Enter number of calls :");
    scanf("%d", &calls);

    if (calls <= 100)
    {
        bill = 0;
    }
    else if (calls > 99 && calls < 200)
    {
        calls = calls - 100;
        bill = (1 *calls);
    }
    else if (calls > 199 && calls < 300)
    {
        calls = calls - 200;
        bill = (1 *100) + (2 *calls);
    }
    else if (calls > 299  )
    {
        calls = calls - 300;
        bill = (1 * 100) + (2 * 100) + (3* calls);
    }

    printf("Your bill is Rs. %0.2f", bill);

    return 0;
}
