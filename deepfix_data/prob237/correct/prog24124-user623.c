#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{  int max,i,j,inv=0,count=0;
for(i=l;i<r;i++) {
    max=arr[i];
    for(j=i+1;count<r;j++) {
        if(max>arr[j])
        inv++;
        count++; } }
return inv; }
int main() {
    int n,k,i,max_inv;
    scanf("%d%d",&n,&k);
    int max[n%k];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=1;i<n%k;i++) {
        max[i-1]=getInversions(i,k); }
    for(i=0;i<n%k;i++)
    printf("%d\n",max[i]);
    return 0; }