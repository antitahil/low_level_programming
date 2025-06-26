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
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if (n > 0)
{
  printf("%i is positive\n");
}
  else if (n < 0)
{
  printf("%i is negative\n");
}
else
{
  printf("%i is zero\n");
}

  return (0);
}
