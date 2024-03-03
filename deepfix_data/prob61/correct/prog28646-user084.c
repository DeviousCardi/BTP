#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,k,i,a,oldcount,total=0,j;
    int *count;
    scanf("%d",&n);
    scanf("%d",&k);
    count=(int*)malloc((k+1)*sizeof(int));
    for(i=0;i<=k+1;i++)
    count[i]=0;
    for(i=0;i<n;i++) {
        scanf("%d",&a);
        count[a]++; }
    for(i=0;i<k;i++) {
        oldcount=count[i];
        count[i]=total;
        total+=oldcount;
        for(j=0;j<oldcount;j++)
        printf(" %d",i);
        if(total==n)
        break; } }