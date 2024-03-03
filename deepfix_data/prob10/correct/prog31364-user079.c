#include<stdio.h>
int max(int a,int b) {
    if(a>=b)
    return a;
    else
    return b; }
int max1(int MaxTill[],int size)
{    int d=0,k;
    for(k=0;k<=size;k++) {
        d=max(d,MaxTill[k]); }
    return d; }
int main() {
    int a[20],n,i,MaxTill[20],max_till_now,j,s;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    max_till_now=a[0];
    MaxTill[0]=1;
    for(j=1;j<n;j++) {
        if(max_till_now<a[j])
        {   max_till_now=a[j];
            MaxTill[j]=max(max1(MaxTill,j-1)+1,1);
            s=j; }
        else
        MaxTill[j]=1; }
    printf("%d",MaxTill[s]);
    return 0; }