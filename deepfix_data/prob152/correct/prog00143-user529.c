#include <stdio.h>
void check(int[],int);
int n;
int main() {
    int i;
    scanf("%d",&n);
    printf("%d",n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0; }