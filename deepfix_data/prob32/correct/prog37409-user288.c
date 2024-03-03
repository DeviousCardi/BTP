#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n,num[20];
 scanf("%d",&n);
for(i=0;i<=n;i++){
    scanf("%d",&num[i]); }
    if(i==0){
      if((num[i]<num[i+1]))
     printf("Yes");
      else
     printf("No");
    }else if(i==n-1)
    {if((num[i]<num[i-1]))
     printf("Yes");
      else
     printf("No");}
     else{
    if((num[i]<num[i-1])&&(num[i]<num[i+1]))
      printf("Yes");
      else
     printf("No"); }
    return 0; }