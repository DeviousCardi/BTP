#include <stdio.h>
void rotate_right(int a[], int n) {
    int temp, prev=a[0];
    a[0]=a[n-1]
    for(int i=1;i<n;i++) {
        temp=a[i];
        a[i]=prev;
        prev=temp; } }
int main() {
    int n, d;
    scanf("%d", &n);
    int input[n];
    for(int i=0;i<n;i++)
        scanf("%d", &input[i]);
    scanf("%d", &d);
    for(int i=0;i<d;i++)
        rotate_right(input, n);
    for(int i=0;i<n;i++)
        printf("%d ", input[i]);
    return 0; }