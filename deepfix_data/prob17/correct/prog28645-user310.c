#include <stdio.h>
int main() {
    int n1, n2;
    int A1[20];
    int A2[20];
    int i, j, k=0;
    int arr[20];
    int flag = 0;
    scanf("%d", &n1);
    for(i=0;i<n1;i++)
        scanf("%d", &A1[i]);
    scanf("%d", &n2);
    for(i=0;i<n2;i++)
        scanf("%d", &A2[i]);
    for(i=0;i<n1;i++) {
        for(j=i+1;j<n2;j++) {
            if(A1[i]==A2[j]) {
                arr[k] = j;
                printf("%d\n", arr[k]);
                k++; } } }
    for(i=0;i<k;i++) {
        if(arr[i]==arr[i+1]-1)
            continue;
        else {
            printf("NO");
            flag = 1;
            break; } }
    if(flag==0)
        printf("YES");
    return 0; }