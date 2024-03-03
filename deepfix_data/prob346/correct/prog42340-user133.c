#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[10000];
    int arr2[100];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr1[i]); }
    for(int i=0;i<100;i++) {
        int s=0;
        for(int j=0;j<n;j++) {
            if(arr1[j]==i)
            s++; }
        arr2[i]=s; }
    for(int i=0;i<100;i++) {
        if(arr2[i]!=0) {
            for(int j=1;j<=arr2[i];j++)
            printf("%d ",i); } }
    printf("end");
    return 0; }