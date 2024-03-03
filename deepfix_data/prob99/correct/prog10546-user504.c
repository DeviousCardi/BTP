#include<stdio.h>
int main() {
int n,i=0,count=0;
scanf("%d",&n);
int array[5];
while(i<n) {
    scanf("%d",&array[i]);
    i++; }
  i=0;
  int j;
  while(i<n) {
      j=i+1;
        while(j<n) {
              if(array[j]>array[i])
              count=count+1;
              j++; }
        i++; }
    printf("%d",count);
    return 0; }