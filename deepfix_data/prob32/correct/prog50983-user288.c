#include <stdio.h>
#include <stdlib.h>
int main() {
int i,num[20];
for(i=0;i<=20;i++){
    scanf("%d",&num[i]);
    }if((num[i]<num[i-1])&&(num[i]<num[i+1])){
      printf("Yes");} else
    { printf("No"); }
    return 0; }