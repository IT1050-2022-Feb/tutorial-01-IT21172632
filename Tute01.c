/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
    int i;
    float sub1,sub2, sum=0, avg;
    printf("Enter the marks of first subject: ");
    scanf("%f",&sub1);
    printf("Enter the marks of second subject: ");
    scanf("%f",&sub2);
    avg = (sub1+sub2)/2;
    printf("Average Mark = %0.2f", avg);
  return 0;
}

