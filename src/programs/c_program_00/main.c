#include <stdio.h>



int main(int argc, char **argv) {
  printf("This program was called with %d arguments.\n", argc);
  printf("Hello World!\n");

//-----Exercise 2-----

int array[10] = {3, 1, 7, 4, 9, 1, 5, 10, -2, 2};
for ( int i = 0; i < 10; i++)
{
  printf("%d. Zahl:" , i+1 );
  scanf("%d " , &array[10]);
}
for  ( int i = 0; i < 10; i++)
{
printf("%d " , &array[i]);
}
printf("\n");

//----Exercise 1-------

int zahl = 0;
int int_even_odd = 0;
if (int zahl = 1)
{
return 1;
}
else if (int zahl = 2)
{
  return 2;
}
else if (int zahl = 0)
{
  return 0;
}
  

//-----exercise 3------

int Geraden = 0;
int Ungeraden = 0;
int Summe = 0;
for ( int i = 0 ; i < 5; i++);
{
  printf("%d. " , &Geraden);
}
for ( int i = 0 ; i < 5; i++);
{
  printf("%d , int_numbers[i]");
}

for ( int i = 0 ; i < 5; i++);
{
  printf("%d. " , &Ungeraden);
}
for ( int i = 0 ; i < 5; i++);
{
  printf("%d , int_numbers[i]");
}

for ( int i = 0 ; i < 5; i++);
{
  printf("%d. " , &Summe);
}
for ( int i = 0 ; i < 5; i++);
{
  printf("%d , int_numbers[i]");
}


}