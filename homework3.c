#include <stdio.h>
#include <math.h>

int computeHomeValue(int popularity, int size);

int main()
{
  int popularity, size;
  printf("Enter the popularity of the land:");
  scanf("%d",&popularity);
  printf("Enter the size of the house:");
  scanf("%d",&size);
  printf("The housing price in a particular neighborhood is %d.", computeHomeValue(popularity, size));
  return 0;
}

int computeHomeValue(int popularity, int size) 
{
  int homeValue;
  homeValue = ( pow(popularity,3) + pow(size,2)  ) * 10000;
  return homeValue;
}
