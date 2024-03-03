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
    int j=acount[1];
    for(int i=0;i<k;i++) {
        for(int k=acount[i];k<j;k++)
        output[k]=i;
        if(i!=(k-1))
        j=acount[i+1]-1;
        else
        j=j; }
    for(int i=0;i<n;i++)
    printf("\n%d ",output[i]); }