#include <stdio.h>
int main(){
    int n,year,sum,m;
    year=2016;
    scanf("%d",&n);
    while(n>0) {
    m=n%10;
    sum=sum+m;
    n=n/10; }
  while(year%sum!=0)
  year++;
  printf("%d",year);
    return 0; }