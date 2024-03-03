#include <stdio.h>
int main() {
    int n,book[100],arr[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf ("%d",&book[i]);
        scanf ("%d",&arr[i]); }
    for (int j=0;j<n;j++) {
        for (i=0;i<n;i++) {
            if (arr[i]>arr[i+1]) {
                b=arr[i];
                arr[i+1]=arr[i];
                arr[i+1]=b;
                c=book[i];
                book[i+1]=book[i];
                book[i+1]=c; } } }
    for (i=0;i<n;i++)
    printf ("%d ",book[i]);
    printf("end");
    return 0; }