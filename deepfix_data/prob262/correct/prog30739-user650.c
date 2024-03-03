#include<stdio.h>
#include<strings.h>
 void rev(int a[],int i,int n) {
        int temp=a[i];
        a[i]=a[n-1];
        a[n-1]=temp;
        if(i==n/2) {
            return; }
      rev(a,i+1,n-1-i); }
int main() {
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    rev(a,0,n);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0; }