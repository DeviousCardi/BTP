#include <stdio.h>
int main() {
  int size,i;
  scanf("%d",&size);
  int money[size];
  for(i=0;i<size;i++) {
      scanf("%d",&money[i]); }
  int temp,t,p,max=money[0],min=money[0];
    for(i=0;i<size;i++) {
        if(money[i]>=max){
        max=money[i];
        p=i; }
        if(money[i]<=min){
        min=money[i];
        t=i; } }
    temp=money[p];
    money[p]=money[t];
    money[t]=temp;
  for(i=0;i<size;i++)
  printf("%d ",money[i]);
    printf("end");
    return 0; }