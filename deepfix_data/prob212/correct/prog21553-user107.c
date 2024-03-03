#include <stdio.h>
int main(){
    int i,sum,year;
    char y[5];
    sum=0;
    year=2016;
    for(i=0;i<=3;i++)
    {y[i]>='0'&&y[i]<='9';
        scanf("%c",&y[i]);
        sum=sum+y[i]; }
  while(year%sum!=0)
  year++;
  printf("%d",year);
    return 0; }