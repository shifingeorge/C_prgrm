
#include <stdio.h>

enum week { sunday=1, monday, tuesday, wednesday, thursday, friday, saturday};

int main()
{
enum week today;
today = wednesday;
printf ("%d day " , today +1);
return 0;
}
/*What is the output of the code? 
    4 day
    
Try to change the value of Today as August. Write your inference?
    Error Reason: august not decleared.
    
Try to change the value of Today as SUNDAY. Write your inference?
    Error Reason: SUNDAY not decleared.If it was sunday the output is 1 day
    
Modify the code like enum={sunday=1,monday,tuesday,..}. What is your inference?
    5 day
*/
