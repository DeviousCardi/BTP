#include <stdio.h>
int main() {
    int k, n, arr[100], flag;
    scanf("%d\n", &k);
    scanf("%d\n", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    flag=0;
    for(int i=0; i<n; i++) {
        for(int j=(i+1); j<n ; j++) {
            if((arr[i]+arr[j])==k) {
                flag=1;
                break; } }
        if(flag)
                break; }
    if(flag)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }