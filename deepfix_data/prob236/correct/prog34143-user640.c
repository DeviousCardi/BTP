#include <stdio.h>
int main() {
    int n,book[100],arr[100],new[100],b;
    int i;
    scanf("%d\n",&n);
    for (i=0;i<n;i++) {
        scanf ("%d ",&book[i]); }
    scanf("\n");
    for (i=0;i<n;i++)
        scanf ("%d ",&arr[i]);
    for (i=0;i<n;i++) {
        b=arr[i];
        new[b]=book[i]; }
    for (i=0;i<n;i++)
    printf ("%d ",new[i]);
    printf("end");
    return 0; }