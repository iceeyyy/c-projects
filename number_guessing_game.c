#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int
main ()
{
  int number, guess, nguesses = 1;
  srand (time (0));
  number = rand () % 100 + 1;
  // printf("the number is %d",number);
  printf ("guess the number between 1 to 100\n");
  do
    {
      scanf ("%d", &guess);

      if (guess > number)
	{
	  printf ("chotta number le le bhai please\n");
	}
      else if (guess < number)
	{
	  printf ("bda number le le bhai please\n");
	}
      else
	{
	  printf ("you guessed the number in %d attempts\n", nguesses);
	}
      nguesses++;
    }
  while (guess != number);


  return 0;
}
