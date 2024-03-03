#include <stdio.h>
int main(){
    int i,count,j,k,n,list[1000],b[1000];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&list[i]);
    for(i=0;i<n;i++)
    {count=0;
        for(j=i+1;j<n;j++) {
         if(list[j]==list[i])
         count++;
         b[i]=count; } }
    for(i=0;i<n;i++) {
        if(b[i]!=0 && b[k-i]!=0)
        printf("lucky"); }
return 0; }