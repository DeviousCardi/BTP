#include <stdio.h>
void shift(int arr[],int,int);
int main() {
    int n,d,arr[1000],i,x,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)  {
        scanf("%d",&arr[i]); }
    scanf("%d",&d);
    shift(arr,n,d);
    for(i=0;i<d;i++)  {
        x=arr[n-1];
        for(j=n-1;j>0;j--)  {
            arr[j]=arr[j-1]; }
        arr[0]=x; }
    for(int i=0;i<n;i++)  {
        printf("%d",arr[i]); }
    return 0; }
void shift(int arr[],int n,int d)  {
    int x;
    x=arr[0+(d%n)];
    arr[0+(d%n)]=arr[0];
    for(int i=0;i<n;i++)  {
        x=arr[i];
        arr[i+(d%n)]=arr[i]; } }