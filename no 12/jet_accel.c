#include <stdio.h>

int main()
{
  int velocity, distance;
  double accel, time_accel;

  printf("Enter the distance\n");
  scanf("%d", &distance);
  printf("Enter the velocity\n");
  scanf("%d", &velocity);

  //convert km/h to m/s 
  velocity = (velocity * 5) / 18;

  accel = (velocity * velocity) / (2 * distance);

  time_accel = velocity / accel;

  printf("The acceleration is %lf m/s^2\n", accel);
  printf("The time it takes for the fighter to be accelerated is %lf second\n", time_accel);

  return(0);
}