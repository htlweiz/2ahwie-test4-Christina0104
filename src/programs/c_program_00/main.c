#include <stdio.h>

int int_even_odd(int a)
{
  if (a == 0)
    return 0;
  else if (a % 2 == 0)
    return 2;
  else
    return 1;
}

int main(int argc, char **argv)
{
  //EXERCISE 1
  int number = 0, result = 0;
  printf("Testzahl : ");
  scanf("%d", &number);
  result = int_even_odd(number);
  if (result == 0)
    printf("Die Testzahl ist 0\n");
  else if (result == 1)
    printf("Die Testzahl ist ungerade.\n");
  else
    printf("Die Testzahl ist gerade.\n");

//EXERCISE 2

int numbers[10] = {3, 1, 7, 4, 9, 1, 5, 10, -2, 2} ;
for( int i = 0; i < 10; i++)
{
  printf("Zahl %d: %d\n" , i+1, numbers[i]);
}

//EXERCISE 3
int num_arr[5];
int count_even = 0, count_odd = 0, sum= 0;

for (int i = 0; i<5; i++)
{
  printf("%d. Zahl: ", i+1);
 scanf("%d", &num_arr[i]);
}
for (int i = 0; i < 5; i++)
{
  sum += num_arr[i];
  if (num_arr[i] % 2 == 0 ) count_even++;      // --> dann gerade
}

count_odd = 5 - count_even;

printf("Anzahl der geraden Zahlen: %d\n" , count_even);
printf("Anzahl der ungeraden Zahlen: %d\n" , count_odd);
printf("Summe der Zahlen: %d\n" , sum);

  /*
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
*/
}
