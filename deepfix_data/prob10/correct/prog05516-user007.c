#include<stdio.h>
int max(int a[],int n);
int main() {
   int n,maxi=0;
   scanf("%d\n",&n);
   int arr[n],MaxTill[n];
   for(int i=0;i<n;i++)    scanf("%d",&arr[i]);
   for(int j=0;j<n;j++) {
        MaxTill[j]=max(arr[n],j);
    printf("%d",MaxTill[j]);
        if(MaxTill[j]>=maxi) maxi=MaxTill[j]; }
    printf("%d",maxi);
    return 0; }
int max(int a[],int n)
{ int max_int,max=1,rec;
    for(int i=0;i<n;i++)
    { rec=1;
      max_int=a[i];
        for(int j=i+1;j<n;j++) {
           if(a[j]>max_int) { rec++; max_int=a[j];} }
        if(rec>=max) max=rec; }
    return max; }