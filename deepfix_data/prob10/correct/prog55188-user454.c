#include<stdio.h>
int max(int x,int y) {
    if(x>=y)
    return x;
    else
    return y; }
int Maxtill(int i,int a[]) {
    int f=1;
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
    for(int i=0;i<n;i++) {
        l[i]=Maxtill(i,a); }
    int x=0;
    for(int i=0;i<n;i++)
    printf("%d",l[i]);
    for(int i=0;i<n;i++) {
        x=max(l[i],x); }
    printf("%d",x);
    return 0; }