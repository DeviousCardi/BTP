#include <stdio.h>
int check(int a[], int n, int s, int i, int sum){
    for(int j=0; j<n; j++) printf("%d ", a[i]);
    if(sum==s) return 1;
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