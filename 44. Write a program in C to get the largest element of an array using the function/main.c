
//C program to get the largest element of an array using func

#include<stdio.h>

int n;

int larElem(int a[])            //find the largest element
{
    int i=1,lar;
    lar=a[0];
    while(i < n)
	{
      if(lar<a[i])
           lar=a[i];
      i++;
    }
    return lar;
}

int main()
{
    int a[1000],lar,i;

    printf(" Input the size of the array :");
    scanf("%d",&n);
   
    printf(" Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
	     printf(" element - %d : ",i);
	     scanf("%d",&a[i]);
	}
    lar = larElem(a);       //calling the func

    printf(" The largest element in the array is : %d\n\n",lar);
    return 0;
}


