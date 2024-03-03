#include <stdio.h>
int sub(int n,int a[],int sum) {
    if(sum==0) return 1;
    if(n==0 && sum!=0) return 0;
    return (sub(n-1,a,sum)||sub(n-1,a,sum-a[n-1])); }
int main() {
    int n,sum=0;
    scanf("%d",&n);
    int a[30];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum+=a[i]; }
    if(sum%2==0) {
        int true=sub(n,a,sum);
        if(true) printf("YES");
        else printf("NO"); }
    else {
        printf("NO"); }
    return 0; }