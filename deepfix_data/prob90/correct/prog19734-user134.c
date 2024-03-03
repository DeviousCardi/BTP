#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int num[size],i,k,sum;
    scanf("%d",&k);
    for(i=0;i<size;i++) {
    scanf("%d",&num[i]);
     sum=num[i]+1; }
     if(sum<=k&&k%2==1)
     {printf("lucky"); }
     else
     printf("unlucky");
    return 0; }