#include<stdio.h>
int main()
{  int a,c,i;
    if( a>=2 && a<=1000000000) {
     scanf("%d",&a); }
  int arr[a];
    for(i=0;i<a;i++) {
    scanf("%d",&arr[i]);
    c = arr[i+1]*arr[i]; }
    printf("%d",c);
    return 0; }