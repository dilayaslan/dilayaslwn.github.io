#include <stdio.h>
#include <math.h>

int main()
{
  int popularity, size, homeValue;
  printf("Enter the popularity of the land:");
  scanf("%d",&popularity);
  printf("Enter the size of the house:");
  scanf("%d",&size);
  homeValue = ( pow(popularity,3) + pow(size,2)  ) * 10000;
  printf("The housing price in a particular neighborhood is %d.", homeValue);
  return 0;
}
