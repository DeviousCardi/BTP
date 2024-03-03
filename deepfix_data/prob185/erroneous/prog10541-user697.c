#include <stdio.h>
int n,s,k=0,q=0;
int check(int a[],int i,int n,int t) {
    if(t==s) {
        printf("YES");
        return 0; }
    return ( check(a,i+1,n,t)||check(a,i+1,n,t+a[i]) ) }
int main() {
    scanf("%d %d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    check(a,0,n,0);
    printf("NO");
    return 0; }