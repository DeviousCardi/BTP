#include<stdio.h>
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],output[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int acount[k];
    for(int i=0;i<k;i++) {
        acount[i]=0;
        for(int j=0;j<n;j++) {
            if(i==a[j])
            acount[i]++; } }
    int total=0,oldcount=0;
    for(int i=0;i<k;i++) {
        oldcount=acount[i];
        acount[i]=total;
        total=total+oldcount;
        printf("%d ",acount[i]); }
    for(int i=0;i<k;i++) {
        for(int j=acount[i];j<n;j++)
        output[j]=i; }
    for(int i=0;i<n;i++)
    printf("%d ",output[i]); }