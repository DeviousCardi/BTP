#include <stdio.h>
int check(int a[], int n, int s, int i, int sum){
    if(i==n){ printf("rtn 0") return 0;}
    if(sum==s) return 1;
    printf("%d ", sum);
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