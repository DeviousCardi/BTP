#include <stdio.h>
void swap(int arr[],int i,int f,int p,int n)
{   if(p==(n-1)) {
        return; }
    int q;
    q=arr[i];
    arr[i]=arr[f];
    arr[f]=q;
    p++;
    if(p==(n-1)) {
    for(int i=0;i<n;i++) {
        printf("%d",arr[i]); } }
    f=f%n;
    swap(arr,i++,f,p,n); }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int d;
    scanf("%d",&d);
    int c=d%n;
    swap(arr,0,c,0,n);
    for(int i=0;i<n;i++) {
        printf("%d",arr[i]); }
    return 0; }