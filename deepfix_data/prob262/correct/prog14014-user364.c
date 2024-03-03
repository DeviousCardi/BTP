#include<stdio.h>
#include<strings.h>
void rev(int a[],int temp[],int n,int i,int index) {
    int j;
    if(i==n) {
        for(j=0;j<n;j++)
        printf("%d ",temp[j]);
        return; }
    temp[i]=a[index];
    return rev(a,temp,n,i+1,index-1); }
int main() {
   int n,i;
   int a[1000000000],b[1000000000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    rev(a,b,n,0,n-1);
    return 0; }