#include <stdio.h>
int subset_sum(int a[], int n, int sum) {
    if (n==-1) return 0;
    if (0==subset_sum(a,n-1,sum)||0==subset_sum(a,n-1,sum-a[n])) return 1; }
int main() {
    int n,i,sum=0, a[30];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum=sum+a[i]; }
    int f= subset_sum(a,n,sum);
    if (f==1) printf("YES");
    else printf("NO");
    return 0; }