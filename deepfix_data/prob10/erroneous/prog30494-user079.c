#include<stdio.h>
int MaxTill(int a[],int size)
{   MaxTill=1;
    int max_till_now=a[0],count=1;
    for(i=1;i<size;i++) {
      if(a[i]>max_till_now) {
      max_till_now=a[i];
      count++; } }
    return count; }
int main() {
    int a[20],MaxTill;
    MaxTill(a,20);
    printf("%d",MaxTill);
    return 0; }