#include <stdio.h>
int main() {
    int n,d;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&d);
    int hold=n-d;
    for (int i=0;i<n-d;i++) {
        printf("%d",arr[hold+i]); }
    for (int i=0;i<hold;i++) {
        printf("%d",arr[i]); }
    return 0; }