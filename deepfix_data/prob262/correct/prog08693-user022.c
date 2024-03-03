#include <stdio.h>
void reverse(int n,int a[],int i,int h) {
    if(i==h)
    return;
    int temp=a[i];
    a[i]=a[n-1];
    a[n-1]=temp;
    return(reverse(n-1,a,i+1,h)); }
int main() {
    int n,h,j;
    scanf("%d\n",&n);
    h=n/2;
    int a[n];
    for(j=0;j<n;j++)
        scanf("%d ",&a[j]);
    reverse(n,a,0,h);
    for(j=0;j<n;j++)
        printf("%d ",a[j]);
    return 0; }