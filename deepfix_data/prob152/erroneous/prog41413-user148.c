#include <stdio.h>
int check(int i,int n,int sum,int a[n]) {
    checks if adding i no.s results sum/2 or not }
int main() {
    int n,i,sum=0,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum=sum+a[i]; }
    if(sum%2!=0)
        printf("NO");
    else {
        sum=sum/2;
        for(i=1;i<=n;i++) {
            if(check(i,n,sum,a)) {
                flag=1;
                break; } } }
    return 0; }