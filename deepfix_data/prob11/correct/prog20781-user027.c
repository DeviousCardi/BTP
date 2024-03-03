#include <stdio.h>
int check(int a[],int n,int suma,int s) {
     if(n==0)
     return suma==s;
     return check(a,n-1,suma+a[n-1],s); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    scanf("&d",&a);
    int ans=check(a,n,0,s);
    if(ans==0) {
            printf("NO"); }
    else {
             printf("YES"); }
    return 0; }