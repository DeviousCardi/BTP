#include <stdio.h>
int main() {
    int n, flag = 0;
    int i, j, k;
    int count = 1;
    int arr[100];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(k=0;k<i;k++) {
            if(arr[k]==arr[i]) {
                flag = 1;
                break; } }
        if(flag==1)
            continue;
        count = 1;
        for(j=i+1;j<n;j++) {
            if(arr[i]==arr[j])
                count++; }
        if(count!=arr[i]) {
            printf("No");
            flag = 2; } }
    if(flag==0)
        printf("Yes");
    return 0; }