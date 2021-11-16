#include<stdio.h>
#include<math.h>

int main()
{
    int rad,h,w,s,s1,s2,s3;
    float ar,pm;
    {
    printf("Enter radius of Circle:\n");
    scanf("%d",&rad);
    ar=3.14*rad*rad;
    pm=2*3.14*rad;
    printf("The area of your Circle is %.2f\n", ar);
    printf("The perimeter of your Circle is %.2f\n", pm);
    printf("\n");
    }
    {
    printf("Enter lenghts of 3 sides of Triangle:\n");
    scanf("%d %d %d",&s1,&s2,&s3);
    pm=s1+s2+s3;pm/2;
    ar = sqrt((pm/2) * ((pm/2)-s1) * ((pm/2)-s2) * ((pm/2)-s3));
    printf("The area of your Triangle is %.2f\n", ar);
    printf("The perimeter of your Triangle is %.2f\n", pm);
    printf("\n");
    }
    {
    printf("Enter lenght of a side of Square:\n");
    scanf("%d",&s);
    ar=s*s;
    pm=4*s;
    printf("The area of your Square is %.2f\n", ar);
    printf("The perimeter of your Square is %.2f\n", pm);
    printf("\n");
    }
    {
    printf("Enter height and width of Rectangle:\n");
    scanf("%d %d", &h,&w);
    ar=h*w;
    pm=2*(h+w);
    printf("The area of your Rectangle is %.2f\n", ar);
    printf("The perimeter of your Rectangle is %.2f\n", pm);
    printf("\n");
    }
    
    
}
