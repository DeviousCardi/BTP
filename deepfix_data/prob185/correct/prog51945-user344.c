#include <stdio.h>
int check(int a[], int n, int s, int i, int sum){
    printf("%d ", sum);
    if(sum==s){ printf("rtn 1\n"); return 1;}
    if(i==n){ printf("rtn 0\n"); return 0;}
    return check(a, n, s, i+1, sum+a[i])||check(a, n, s, i+1, sum); }
int main() {
    int n, s, i;
    scanf("%d %d\n", &n, &s);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]); }
    if(check(a, n, s, 0, 0)) printf("YES");
    else printf("NO");
    return 0; }