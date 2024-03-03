#include<stdio.h>
int main() {
   int i, arr[500], sum, number;
    scanf("%d", &number);
    for (i = 0; i < number; i++)
      scanf("%d", &arr[i]);
   sum = 0;
   for (i = 0; i < number; i++)
      sum = sum + arr[i];
    if (i<number) {
        printf("lucky"); }
    else {
    printf("unlucky"); } }