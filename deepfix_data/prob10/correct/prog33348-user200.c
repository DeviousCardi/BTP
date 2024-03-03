#include <stdio.h>
#include <stdlib.h>
int max_till(int a, int b[], int sz);
int max(int x, int y);
int main() {
    int n,c1,arr[20],i,c2,c3,a,max[20];
    scanf("%d", &n);
    for(c1=0;c1<n;c1++) {
        scanf("%d", &arr[c1]); }
 for(i=0;i<n;i++) {
    a = 1;
    for(c2=i;c2<n;) {
        for(c3=(c2+1);c3<n;c3++) {
            if(arr[c3]>arr[c2]) {
                a++;
                c2 = c3;
                break; } }
        if(c3==n) {
            max[i] = a;
            break; } } }
    return 0; }
int max(int a, int b) {
    if(a>b)
    return a;
    else
    return b; }