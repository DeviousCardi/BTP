#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n,num[20];
  scanf("%d\n",&n);
for(i=0;i<n;i++){
    scanf("%d\n",&num[i]); }
    if(i==0){
      if((num[i]<num[i+1]))
     printf("Yes\n");
      else
     printf("No\n");
    }else if(i==n)
    {if((num[i]<num[i-1]))
     printf("Yes\n");
      else
     printf("No\n");}
     else{
    if((num[i]<num[i-1])&&(num[i]<num[i+1]))
      printf("Yes\n");
      else
     printf("No\n"); }
    return 0; }