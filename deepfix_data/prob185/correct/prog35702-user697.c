#include <stdio.h>
int n,s,k=0;
int check(int a[],int i,int n,int t) {
    if(i<n-1) {
        if( check(a,i+1,n,t)==s||check(a,i+1,n,t+a[i])==s ); {
        printf("YES");k=1; } }
    return t; }
int main() {
    int i;
    scanf("%d %d",&n,&s);
    int a[i];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    check(a,i,n,0);
    if(k==1)
    printf("NO");
    return 0; }