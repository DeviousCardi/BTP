#include <stdio.h>
int existSum(int a[], int in, int size, int s, int sum) {
    if(in==size)
        return (s==sum);
    return (existSum(a,in+1,size,s,sum) || existSum(a,in+1,size,s+a[in],sum)); }
int main() {
    int n, s;
    scanf("%d %d", &n, &s);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int ans = existSum(a, 0, n, 0, s);
    if(ans==0)
        printf("NO");
    else
        printf("YES");
    return 0; }