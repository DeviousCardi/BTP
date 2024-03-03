#include <stdio.h>
int main() {
    int arr[20],b[20],n,d,c1,c2,c3;
    scanf("%d", &n);
    for(c1=0;c1<n;c1++) {
        scanf("%d", &arr[c1]); }
    scanf("%d", &d);
    d = n - d;
    for(c2=0;c2<n;c2++) {
        b[c2] = arr[(c2+d)%n]; }
    for(c3=0;c3<n;c3++)
    printf("%d ", b[c3]);
    return 0; }