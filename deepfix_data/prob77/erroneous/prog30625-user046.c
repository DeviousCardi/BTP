#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int pos1=0;int pos2=0;int temp=0;
    for(int i=0;i<n;i++) {
        if(big<arr[i]) {
            pos1=i; }
        else if(small>arr[i]) {
            pos2=i; } }
    temp=arr[pos1];
    arr[pos1]=arr[pos2];
    arr[pos2]=temp;
    for(int i=0;i<n;i++)
    printf("%d",&arr[i]);
    printf("end");
    return 0; }