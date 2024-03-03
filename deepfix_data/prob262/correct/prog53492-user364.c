#include<stdio.h>
#include<strings.h>
void rev(int a[],int n,int i,int index) {
    int temp[1000000000];
    if(n==0) {
        return; }
    if(index==0) {
        for(i=0;i<n;i++)
        printf("%d ",temp[i]); }
    temp[i]=a[index];
    return rev(a,n,i+1,index-1); }
int main() {
   int n,i;
   int a[1000000000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    rev(a,n,0,n-1);
    return 0; }