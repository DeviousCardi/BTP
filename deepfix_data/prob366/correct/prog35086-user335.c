#include <stdio.h>
int main(){
    int n,i,l,k,array[200];
    scanf("%d",&n);
    int dis[2*n];
    for (i=0;i<2*n;i++)
    scanf("%d",&array[i]);
    for(i=0;i<2*n;i++) {
        for(k=i+1;k<2*n;k++) {
        if (array[i]==array[k])
        {dis[i]=k-i;
        break;}
        else dis[i]=200; } }
    for(i=0;i<2*n;i++)
    printf("%d ",dis[i]); }