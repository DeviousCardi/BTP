#include<stdio.h>
int fun(int a[],int n);
int main() {
    int i,n,s;
    int a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    s=fun(a,n);
    printf("%d",s);
    return 0; }
int fun(int a[],int n) {
    int i,j,t,s=1;
    for(i=0;i<n;i++) {
        t=a[i];
        for(j=1;j<n;j++) {
            if(t<a[j]) {
                s+=1;
                t=a[j]; }
            else
            {s=0;} } }
    return (s); }