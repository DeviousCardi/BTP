#include <stdio.h>
int subset_sum(int a[], int n, int sum) {
    if (n==-1) return 0;
    if (1==subset_sum(a,n-1,sum)||1==subset_sum(a,n-1,sum-a[n-1])) return 1;
    else return 0; }
int main() {
    int n,i,sum=0, a[30];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum=sum+a[i]; }
    if (sum%2==1) {printf("NO"); return 0;}
    int f= subset_sum(a,n,sum/2);
    if (f==1) printf("YES");
    else printf("NO");
    return 0; }