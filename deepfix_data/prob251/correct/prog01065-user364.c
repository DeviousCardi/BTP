#include <stdio.h>
#include <stdlib.h>
 int temp[100];
int getways(int n,int temp[]) {
    int i;
    temp[0]=1;
    for(i=1;i<=n;i++)
    temp[i]=temp[i]+temp[0];
    for(i=3;i<=n;i++)
    temp[i]=temp[i-3]+temp[0];
    for(i=5;i<=n;i++)
    temp[i]=temp[i-5]+temp[0];
    return temp[n]; }
int main() {
    int n,v,i;
    scanf("%d",&n);
    for(i=0;i<n+5;i++) {
        temp[i]=0; }
    v=getways(n,temp);
    printf("%d",v);
    return 0; }