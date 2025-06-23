#include <stdio.h>

#include <test_c_lib.h>

int find_max_of_three(int a, int b )
{
  if ( a > b)
  return a;
  else
  return b;
}

int main(int argc, char **argv)
{
int zahl1 = 0, zahl2 = 0, max = 0;
 {
   printf("Geben Sie die 1. Zahl ein:");
   scanf("%d" , &zahl1);
   printf("Geben Sie die 2. Zahl ein:");
   scanf("%d" , &zahl2);
   max = find_max_of_three(zahl1 , zahl2);
   printf("Das Maximum von %d und %d ist %d\n:" ,  zahl1 , zahl2 , max );
 }
 
  
 
}
