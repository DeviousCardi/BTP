#include<stdio.h>
#include<strings.h>
void reverse(int n,int a[],int i) {
    int h=i/2;
    if((h-n))/2==n/2)
    return;
    int j=i-n;
    int k=a[j];
    a[j]=a[n-1];
    return(reverse(n-1,a,i)); }
int main() {
    int n,i,j;
    scanf("%d\n",&n);
    i=n;
    int a[n];
    for(j=0;j<n;j++)
        scanf("%d ",&a[j]);
    reverse(n,a,i);
    for(j=0;j<n;j++)
        printf("%d ",a[j]);
    return 0; }