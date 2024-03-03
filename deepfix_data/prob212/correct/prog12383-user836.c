#include <stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  int l=a%10;
  int f=a/1000;
  int tl=(a/100)-10*f;
  int sl=(a%100-l)/10;
  int sum=l+f+sl+tl;
  printf("%d",sum);
    return 0; }