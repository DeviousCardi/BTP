#include<stdio.h>
#include<strings.h>
void print (int a[],int n);
int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
     print ( a,n);
    return 0; }
void print (int a[],int n) {
    if (n>=0) {
        printf("%d ",a[n-1]);
        print (a,n-1); } }