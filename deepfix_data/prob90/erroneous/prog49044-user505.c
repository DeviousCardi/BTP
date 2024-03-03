#include<stdio.h>
int main() {
   int i, arr[500], sum, num;
    scanf("%d", &num);
    for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);
   sum = 0;
   for (i = 0; i < num; i++)
      sum = sum + arr[i];
    if (i<num){
        printf("lucky"); }
    else
    printf("unlucky"); }
   for (i = 0; i < num; i++)
      printf("lucky");
   return (0); }