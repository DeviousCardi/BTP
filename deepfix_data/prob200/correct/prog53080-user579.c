#include <stdio.h>
int arr[100]={0};
int n;
int max(int a[],int x)
{int i,maxi=a[0];
for(i=0;i<x;i++) {
    if(maxi<a[i]){
        maxi=a[i]; } }
return maxi; }
int getMaxLessThan(int upperLimit)
{   int max,i,j;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit)
        {max=arr[i];
        break; } }
    for(j=i+1;j<n;j++) {
        if(arr[j]<upperLimit&&arr[j]>max)
        max=arr[j]; }
    return max; }
int main() {
    int i,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int c[100];
    c[0]=max(arr,n);
    printf("%d",c[0]);
    for(i=0;i<k;i++) {
        c[i+1]=getMaxLessThan(c[i]);
        printf("%d",c[i+1]); }
    return 0; }