#include <stdio.h>
void swap(int arr[],int i,int f,int n)
{   if(f==n) {
        return; }
    int q;
    q=arr[i];
    arr[i]=arr[f];
    arr[f]=q;
    f++;
    i++;
    swap(arr,i,f,n);
    return; }
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int d;
    scanf("%d",&d);
    int c=d%n;
    swap(arr,0,c,n);
    for(int i=0;i<n;i++) {
        printf("%d\n",arr[i]); }
    return 0; }