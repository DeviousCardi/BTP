#include <stdio.h>
void rotate(int,int[],int);
int main() {
    int n;
    scanf("%d",&n);
    int num[n],d,i;
    for(i=0;i<n;i++) {
        scanf("%d ",&num[i]); }
    scanf("%d",&d);
    rotate(n,num,d);
    return 0; }
void rotate(int size,int arr[size],int d) {
    int i;
    int temp[size];
    for(i=0;i<size;i++) {
        temp[i]=arr[i]; }
    for(i=0;i<size;i++) {
        arr[i+d]=temp[i]; }
    for(i=0;i<size;i++)
    printf("%d ",arr[i]); }