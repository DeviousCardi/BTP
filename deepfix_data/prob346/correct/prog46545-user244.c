#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(j=0;j<100;j++) {
        for(i=0;i<n;i++) {
            if(arr[i]==j)
            printf("%d ",j); } }
    printf("end");
    return 0; }