#include <stdio.h>
int main() {
    int n,flag=1,i,j,t,r;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        getchar(); }
    for(i=0;i<n;i++) {
        r=arr[i];
        for(j=0,t=0;j<n;j++) {
            if(arr[j]==r)
                t++; }
        if(t!=r) {
            flag=0;
            break; } }
    if(flag==0)
        printf("Yes");
    else
        printf("No");
    return 0; }