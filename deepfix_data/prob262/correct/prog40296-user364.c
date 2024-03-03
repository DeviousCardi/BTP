#include<stdio.h>
#include<strings.h>
void rev(long int a[],long int temp[],int n,int i,int index) {
    if(i==n) {
        return; }
    temp[i]=a[index];
    return rev(a,temp,n,i+1,index-1); }
int main() {
   long int n;
   int i;
   long int a[100000000],b[1000000000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    rev(a,b,n,0,n-1);
    for(i=0;i<n;i++)
    printf("%d",b[i]);
    return 0; }