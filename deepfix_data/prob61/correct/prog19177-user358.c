#include<stdio.h>
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],output[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int acount[k+1];
    for(int i=0;i<(k+1);i++) {
        acount[i]=0;
        for(int j=0;j<n;j++) {
            if(i==a[j])
            acount[i]++; } }
    int total=0,oldcount=0;
    for(int i=0;i<(k+1);i++) {
        oldcount=acount[i];
        acount[i]=total;
        total=total+oldcount; }
    for(int i=0;i<(k+1);i++) {
        for(int j=acount[i];j<n;j++)
        output[j]=i; }
    for(int i=0;i<n;i++)
    printf("%d ",output[i]);
return 0; }