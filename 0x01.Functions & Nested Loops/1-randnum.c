#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** main - entry point of the program
 * Description: This prints a random number everytime it is
 * executed and prints whether the generated number is positive
 * negative or zero
 * 
 * Return: 0
 */
int main(void)
{
  int n, last;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  last = n % 10; 

  if (last > 5)
{
  printf("The last digit of %i is %i and is greater than 5\n", n, last);
}
  else if (last < 5 && != 0)
{
  printf("The last digit of %i is %i and is less than 5\n", n, last);
}
else if (last == 0)
{
  printf("The last digit of %i is %i and is zero\n", n, last);
}

  return (0);
}
