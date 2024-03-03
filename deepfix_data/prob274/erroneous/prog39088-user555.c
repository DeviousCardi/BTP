#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]) }
    int b=1;
    for(i=0;i<n;) {
        i=arr[arr[i]-1];
        if(b==i)
            t++;
        i=i-1 }
    printf("%d %d",t,t-1);
    return 0; }