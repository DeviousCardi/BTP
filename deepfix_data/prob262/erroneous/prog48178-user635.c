#include<stdio.h>
#include<strings.h>
void decrement(int i);
int main() {
    int end,i,n=1;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    i= n - 1;
    while(i>=0)
    printf("%d",arr[i]);
    decrement(i);
void decrement(int)
    i--;
    return 0; }