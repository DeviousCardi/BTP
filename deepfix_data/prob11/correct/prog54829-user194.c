#include <stdio.h>
int sum(long int a[],int n,long int S) {
    static int res=0;
    if(res==S)
        return 1;
    else {
        res=res+a[n-1];
        return sum(a,n-1,S); } }
int main() {
    long int S,a[30];
    int n,i,x;
    scanf("%d",&n);
    scanf("%ld",&S);
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    x=sum(a,n,S);
    if(x==1)
        printf("YES");
    return 0; }