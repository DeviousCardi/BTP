#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int count = 0;
    int flag = 0;
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for(i=0;i<n;i++) {
        count = 0;
        for(j=0;j<n;j++) {
            if(arr[j]==arr[i])
                count++; }
        if(count!= arr[i]) {
            flag = 1;
            printf("No");
            break; } }
    if(flag == 0 )
        printf("Yes");
    return 0; }