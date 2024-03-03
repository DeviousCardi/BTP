#include<stdio.h>
int arr[100],num;
int getInversions(int l,int r)
{  int max,i,j,inv=0,count=0;
for(i=l;i<num;i++) {
    max=arr[i];
    for(j=i+1;count<r&&j<num;j++) {
        if(max>arr[j])
        inv++;
        count++; } }
return inv; }
int main() {
    int n,k,i,max_inv;
    scanf("%d%d",&n,&k);
    int max[n];
    num=n;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;(i+k)<=n;i++) {
        max[i]=getInversions(i,k); }
       max_inv=max[0];
    for(i=1;i+k<=n;i++) {
        if(max_inv>max[i])
        continue;
        else
        max_inv=max[i]; }
    for(i=0;i+k<=n;i++)
    printf("%d\n",max[i]);
    return 0; }