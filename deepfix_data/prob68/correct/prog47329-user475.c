#include<stdio.h>
int product(int i,int prod,int a[],int size) {
    for(i=0;i<size;i++)
    printf("%d",a[i]);
    int j=i+1;
    prod*=a[i];
    if(i>size)
        return prod;
    else
        return prod*product(j,prod,a,size); }
int main() {
    int i,n;
    int prod=1;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    i=0;
    printf("%d",product(i,prod,a,n));
    return 0; }