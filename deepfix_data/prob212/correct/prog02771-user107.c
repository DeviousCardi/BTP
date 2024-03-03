#include <stdio.h>
int main(){
    int y[6],i,sum,year;
    sum=0;
    year=2016;
    for(i=0;i<=3;i++) {
        scanf("%d",y[i]);
        sum=sum+y[i]; }
  while(year%sum!=0)
  year++;
  printf("%d",year);
    return 0; }