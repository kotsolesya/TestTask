/*
Write code to sum all of the numbers between 1 and 100 
(e.g. 1 + 2 + 3 + ....+ 100)
*/
#include <stdio.h>
#include <conio.h>

 
int main(void)
{
   int sum = 0;
   
   for (int i = 1; i<=100; i++)
       sum += i;
   printf("sum all of the numbers between 1 and 100 = %d", sum);
   getch();
   return 0;
}
