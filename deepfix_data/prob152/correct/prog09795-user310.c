#include <stdio.h>
int main() {
    int n;
    int sum1 = 0;
    int sum2 = 0;
    int i, j;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for(i=0,j=n-1;i<j;) {
        if(sum1==sum2) {
            sum1+=arr[i];
            sum2+=arr[j];
            i++;
            j--; }
        else if(sum1<sum2) {
            sum1+=arr[i];
            i++; }
        else if(sum1>sum2) {
            sum2+=arr[j];
            j--; } }
    if(sum1==sum2)
        printf("YES");
    else
        printf("NO");
    return 0; }