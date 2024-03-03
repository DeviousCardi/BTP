#include<stdio.h>
#include<strings.h>
void rev(int s[], int n) {
    if(n<1)
    return;
    printf("%d ", s[n-1]);
    rev(s, n-1); }
int main() {
    int n, ar[1000];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &ar[i]); }
    rev(ar, n);
    return 0; }