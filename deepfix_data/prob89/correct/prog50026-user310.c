#include <stdio.h>
int main(){
    int k, n;
    int i, j, flag=0;
    int arr[100];
    scanf("%d", &k);
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d", &arr[i]); }
    for (i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]+arr[j]== k) {
                printf("lucky");
                flag = 1;
                break; } }
        if(flag==1)
            break; }
    if(flag==0)
        printf("unlucky");
    return 0; }