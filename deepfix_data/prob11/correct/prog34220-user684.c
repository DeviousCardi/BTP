#include <stdio.h>
int check(int a[],int n,int value,int sum) {
    if(sum==value)
        return 1;
    if(n==0)
        return 0;
    return check(a,n-1,value,sum+a[n-1])||check(a,n-1,value,sum); }
int main() {
    int n,s;
    scanf("%d %d\n",&n,&s);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d ",&a[i]);
    int c=check(a,n,s,0);
    return 0; }