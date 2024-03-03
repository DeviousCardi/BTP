#include <stdio.h>
int main(){
    int n,i,count,value;
    int s[100];
    scanf("%d",&n);
    for(i=1;i<=100;i=i+1) {
       scanf("%d %d",&s[i],&value);
       if(value==0) {
           break; } }
    count=i+1;
    while(count>=0) {
      printf(" %d",s[count]);
      count=count-1; }
    printf("end");
    return 0; }