#include <stdio.h>
int main() {
  int size,i;
  scanf("%d",&size);
  int money[size];
  for(i=0;i<size;i++) {
      scanf("%d",&money[i]); }
  int temp,t,p,max=array[0],min=array[0];
    for(i=0;i<size;i++) {
        if(array[i]>max){
        max=array[i];
        p=i; }
        if(array[i]<min){
        min=array[i];
        t=i; } }
    temp=array[p];
    array[p]=array[t];
    array[t]=temp;
  for(i=0;i<size;i++)
  printf("%d",money[i]);
    printf("end");
    return 0; }