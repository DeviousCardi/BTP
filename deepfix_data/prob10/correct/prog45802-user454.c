#include<stdio.h>
int max(int x,int y) {
    if(x>=y)
    return x;
    else
    return y; }
int Maxtill(int i,int a[]) {
    int f=0;
    for(int j=0;j<i;j++) {
        if(a[i]>a[j])
        f=f+1;
        else
        break; }
    return f; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int l[n];
    int x=Maxtill(1,a);
    printf("%d",x);
    return 0; }