#include <stdio.h>
void swap(int arr[],int i,int f,int n)
{   if(i==(n)) {
        return; }
    int q;
    q=arr[i];
    arr[i]=arr[f];
    arr[f]=q;
    if(i==(n-1)) {
    for(int i=0;i<n;i++) {
        printf("%d",arr[i]); } }
    f=f++;
    f=f%n;
    swap(arr,i++,f,n);
    return; }
int main() {
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    int d;
    scanf("%d\n",&d);
    printf("%d %d ",n,d);
    for(int i=0;i<n;i++) {
        printf("%d",arr[i]); }
    int c=d%n;
    swap(arr,0,c,n);
    for(int i=0;i<n;i++) {
        printf("%d",arr[i]); }
    return 0; }