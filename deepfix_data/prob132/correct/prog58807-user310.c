#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    char str[2*n-1];
    scanf("%s", str);
    int count = 0;
    int flag = 0;
    int arr[n];
    for(i=0;i<2*n-1;i=i+2) {
        for(j=0;j<n;j++)
            arr[j] = str[i]; }
    for(i=0;i<n;i++)
        printf("%d\n", arr[i]);
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