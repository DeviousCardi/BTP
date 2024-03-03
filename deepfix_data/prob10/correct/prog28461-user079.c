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
    int a[19],n,i,MaxTill[19],max_till_now,j,s,min,l,store_i,MaxTill_Ans[20],maximum;
    scanf("%d",&n);
    scanf("%d",&a[0]);
    min=a[0];
    for(i=1;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
       for(j=i;j<n;j++) {
           if(max_till_now<a[j])
           {   max_till_now=a[j];
            MaxTill[j]=max(max1(MaxTill,j-1)+1,1);
            s=j; }
            else
            MaxTill[j]=1; }
       MaxTill_Ans[i]=MaxTill[s]; }
    maximum=MaxTill_Ans[0];
    for(i=0;i<n;i++) {
      if(MaxTill_Ans[i]>=maximum)
      maximum=MaxTill_Ans[i]; }
    printf("%d",maximum);
    return 0; }