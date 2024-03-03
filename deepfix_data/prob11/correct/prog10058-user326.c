#include <stdio.h>
int count=-1;
void find(int arr[],int n, int key) {
    int z;
    if(count!=-1)
        return;
    if(key>0) {
        for(int i=0;i<n;i++) {
            z=arr[i];
            arr[i]=arr[n-1]+arr[i];
            arr[n-1]=arr[i]-arr[n-1];
            arr[i]=arr[i]-arr[n-1];
            find(arr,n-1,key-z);
            arr[i]=arr[n-i-1]+arr[i];
            arr[n-1]=arr[i]-arr[n-1];
            arr[i]=arr[i]-arr[n-1];
            if(key==0) {
                break; } } }
    if(key==0) {
        printf("YES");
        count++;
        return ; }
    else
    return ; }
int main() {
    int n,key;
    scanf("%d %d\n",&n,&key);
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    find(ar,n,key);
    if(count==-1)
    printf("NO");
    return 0; }