#include <stdio.h>
int main(){
    int n,i,j,count;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        if(arr[i]==1)
        break; }
    k=arr[1];
    for(j=1;;) {
        j=arr[j];
        count=count+1
        if(k==j) {
            printf("%d",count);
            break; } }
    return 0; }