#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n==1)
    return 1;
    else
    return 2*hanoi(n-1)+1; }
int main() {
    int t;
    scanf("%d\n",&t);
    int a[t];
    int i;
    for(i=0;i<n;i++) {
        scanf("%d\n",&a[i]);
        printf("%d\n",hanoi(a[i])); }
    return 0; }