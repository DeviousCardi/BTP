#include <stdio.h>
int main() {
    int n1, n2;
    int A1[20];
    int A2[20];
    int i, t=21;
    int arr[20];
    int flag = 0;
    scanf("%d", &n1);
    for(i=0;i<n1;i++)
        scanf("%d", &A1[i]);
    scanf("%d", &n2);
    for(i=0;i<n2;i++)
        scanf("%d", &A2[i]);
    for(i=0;i<n1;i++) {
        if(A1[i]==A2[0]) {
            t=i;
            break; } }
    if(t==21)
        printf("NO");
    else {
        for(i=0;i<n2;i++) {
            if(A1[t+i]==A2[i])
                continue;
            else {
                printf("NO");
                flag = 1;
                break; } } }
    if(flag==0 && t!=21)
        printf("YES");
    return 0; }