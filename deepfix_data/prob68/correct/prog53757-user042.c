#include<stdio.h>
int a[100000];
int  product(int a[],int n) {
    if(n==0)    {printf("YES\n");printf("%d\n", a[0]);return a[0];}
    else    {printf("NO\n");printf("%d\n", a[n]*product(a,n-1));return a[n]*product(a,n-1);} }
int main() {
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        printf("%d",a[i]); }
    printf("\n");
    printf("%d",product(a,n));
    return 0; }