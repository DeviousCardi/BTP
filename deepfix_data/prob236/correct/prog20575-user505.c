#include<stdio.h>
int main() {
   int arr[100], i, j, num, a;
   scanf("%d", &num);
   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]); }
   j = i - 1;
   i = 0;
   while (i < j) {
      a = arr[i];
      arr[j] = a;
      arr[i] =arr[j];
      i ++; }
   for (i = 0; i < num; i++) {
      printf("%d ", arr[i]); }
    printf("end");
    return 0; }