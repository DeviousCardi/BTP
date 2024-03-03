#include<stdio.h>
#include<strings.h>
#define max 1000000000
void rev(int s[], int n) {
    if(n<1)
    return;
    printf("%d ", s[n-1]);
    rev(s, n-1); }
int main() {
    int n, ar[1000];
    scanf("%d", &n);
    if(n>max)
        return -1;
    for(int i=0; i<n; i++) {
        scanf("%d", &ar[i]); }
    rev(ar, n);
    return 0; }