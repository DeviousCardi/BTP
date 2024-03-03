#include<stdio.h>
int diff(int);
int main() {
    int n;
    scanf("%d",&n);
    int d;
    d=diff(n);
    printf("%d",d);
    return 0; }
int diff(int x) {
     int i,n;
     scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int f;
    if (x==1)
        return(a[0]);
    else
        f=(a[x-1]-diff(x-1));
        return(f); }