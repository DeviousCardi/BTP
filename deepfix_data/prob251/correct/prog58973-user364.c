#include <stdio.h>
#include <stdlib.h>
 int temp[100];
int getways(int n,int temp[]) {
    int i;
    temp[0]=1;
    for(i=1;i<=n;i++)
    temp[i]=temp[i-1]+temp[i];
    for(i=3;i<=n;i=i+3)
    temp[i]=temp[i-3]+temp[i];
    for(i=5;i<=n;i=i+5)
    temp[i]=temp[i-5]+temp[i];
    return temp[n]; }
int main() {
    int n,v,i;
    scanf("%d",&n);
    for(i=0;i<n+5;i++) {
        temp[i]=0; }
    v=getways(n,temp);
    printf("%d",v);
    return 0; }