#include <stdio.h>
int rev(int num[],int size,int last) {
    int hold=size-last;
    for (int i=size-last;i<size;i++) {
        printf("%d ",num[i]); }
    for (int i=0;i<hold;i++) {
        printf("%d ",num[i]); } }
int main() {
    int n,d;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&d);
    rev(arr[],n,d);
    return 0; }