#include <stdio.h>

int main()
{
  int length_yard, length_house, width_yard, width_house, area, time, rate;

  rate = 2;
  printf("Enter your yard length\n");
  scanf("%d", &length_yard);
  printf("Enter your yard width\n");
  scanf("%d", &width_yard);

  printf("Enter your house length\n");
  scanf("%d", &length_house);
  printf("Enter your house width\n");
  scanf("%d", &width_house);

  area = (length_yard * width_yard) - (length_house * width_house);
  time = area / rate;

  printf ("It takes %d second to cut the grass", time);

  return(0);
}

