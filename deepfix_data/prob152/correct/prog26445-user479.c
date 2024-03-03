#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int tot_sum = 0;
    int arr[30];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        tot_sum += arr[i]; }
    if( tot_sum % 2 != 0)
        printf("NO");
    return 0; }