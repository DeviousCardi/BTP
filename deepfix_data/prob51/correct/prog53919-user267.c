#include <stdio.h>
int main() {
int n , k, i, j, temp=0, min=0;
scanf("%d %d", &n, &k);
int a[n];
for(i = 0; i < n; i++)
 scanf("%d", &a[i]);
for(i = 0; i < n; i++) {
    min=i;
    for(j = i+1; j < n; j++) {
        if( a[j] < a[min]) min =  j; }
    temp = a[i];
    a[i] = a[min];
    a[min] = temp; }
printf("%d",a[n-k]);
    return 0; }