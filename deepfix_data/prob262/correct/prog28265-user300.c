#include<stdio.h>
#include<strings.h>
int rev(int a[],int n) {
    if(n==0) return 0;
    printf("%d ",a[n-1]);
    return rev(a,n-1); }
int main() {
    int s[10000],m,d;
    scanf("%d\n",&m);
    for(int i=0;i<m;i++)
        scanf("%d",&s[i]);
    d=rev(s,m);
    return 0; }