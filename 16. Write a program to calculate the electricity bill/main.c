#include<stdio.h>
int main()
{
	float bl, st,en, un;

	printf("Enter the starting and ending meter reading =\n");
	scanf( "%f%f" ,&st ,&en);
	un = en - st;

	if( un <= 100 )
	{
		bl = un * 1.50;
		printf("Bill = $%.2f",bl);
	}
	else if( un <= 200 && un > 100 )
	{
		bl = un * 2.50 ;
 		printf("Bill = $%.2f",bl);

	}
	else if( un <= 500 && un > 200 )
	{
		bl = un * 3.50 ;
		printf("Bill = $%.2f",bl);

	}
	else
	printf("=====SRY INVALID=====");
	
	return 0;
}

