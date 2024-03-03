#include <stdio.h>
int main() {
    int n,i,t=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int b=1;
    for(i=0;i<n;) {
        i=arr[arr[i]-1];
        t++;
        if(b==i)
            break;
        i=i-1; }
    printf("%d %d",t,t-1);
    return 0; }