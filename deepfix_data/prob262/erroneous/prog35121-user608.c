#include<stdio.h>
#include<strings.h>
void printrev(int n,int a[],int i) {
    if(i<0)
    return;
    printf("%d ",a[i]);
    printrev(n,a,i-1); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printrev(n,a[],n-1);
    return 0; }