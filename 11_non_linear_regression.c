/*LAB 11: Write a program that fits non-linear equation in given data*/

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, i;
  float x, y, m, c, d;
  float sumx = 0, sumxsq = 0, sumy = 0, sumxy = 0;
  printf("Enter the number of values for n:");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Enter values of x and y: ");
    scanf("%f%f", &x, &y);

    sumx = sumx + x;
    sumxsq = sumxsq + (x * x);
    sumy = sumy + log(y);
    sumxy = sumxy + (x * log(y));
  }
  d = n * sumxsq - sumx * sumx;
  m = (n * sumxy - sumx * sumy) / d;
  c = (sumy * sumxsq - sumx * sumxy) / d;
  c = exp(c);

  printf("\n The curve is y = %.3f * e ^ (%.3fx)\n", c, m);

  // printf("The slope of eqn. (m) = %f\t & constant (c) = %f\n", m, c);
  getch();
  return 0;
}