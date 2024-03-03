#include<stdio.h>
#include<strings.h>
void funct(int a[],int n,int i) {
    if (i==n-1) {
        printf("%d",&a[i]) }
    else {
        funct(a,n,i+1);
        printf("%d",a[i]); } }
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    int i;
    for (i=0;i<n;i++) {
        scanf("%d",&array[i]); }
    funct (array,n,0);
    return 0; }