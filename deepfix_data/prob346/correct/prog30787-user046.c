#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int arr2[100]={0};
    for(int i=0;i<n;i++) {
        for(int j=0;j<100;j++) {
            if(arr[i]==j) {
                arr2[j]=arr2[j]+1; } } }
    for(int i=0;i<100;i++) {
        if(arr2[i]!=0) {
            for(int j=0;j<arr2[i];j++)
            printf("%d ",i); } }
    printf("end");
    return 0; }