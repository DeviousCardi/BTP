#include <stdio.h>
bool check(int a[], int n, int s) {
    if(s==0) return true;
    if(n==0 && s!=0) return false;
    return (check(a, n-1, s)|| check(a, n-1, s-a[n-1])); }
int main() {
    int n, s;
    scanf("%d %d", &n, &s);
    int a[50];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]); }
    bool p=check(a, n, s);
    if(p==true) printf("YES");
    else printf("NO");
    return 0; }