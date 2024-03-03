#include <stdio.h>
int check(int a[], int n, int s) {
    if(s==0) return 1;
    if(n==0 && s!=0) return 0;
    return (check(a, n-1, s)|| check(a, n-1, s-a[n-1])); }
int main() {
    int n, s;
    scanf("%d %d", &n, &s);
    int a[50];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]); }
    int p=check(a, n, s);
    if(p==1) printf("YES");
    else printf("NO");
    return 0; }