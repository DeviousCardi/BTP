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
    int a[19],n,i,MaxTill[19],max_till_now,j,s,min,l,store_i;
    scanf("%d",&n);
    scanf("%d",&a[0]);
    min=a[0];
    for(i=1;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]<=min) {
        min=a[i];
        store_i=i; } }
    max_till_now=min;
    for(l=0;l<store_i;l++)
    MaxTill[l]=1;
    for(j=store_i;j<n;j++) {
        if(max_till_now<a[j])
        {   max_till_now=a[j];
            MaxTill[j]=max(max1(MaxTill,j-1)+1,1);
            s=j; }
        else
        MaxTill[j]=1; }
    printf("%d",MaxTill[s]);
    return 0; }