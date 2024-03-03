#include <stdio.h>
void swap(int n,int m) {
    int h=n;
    n=m;
    m=h; }
int find(int arr[],int n, int key) {
    if(key==0) {
        return 1; }
    else if(key>0) {
        for(int i=0;i<n;i++) {
            int z=arr[i];
            swap(arr[i],arr[n-1]);
            find(arr,n-1,key-z);
            swap(arr[i],arr[n-1]); } }
    else
    return 0; }
int main() {
    int n,key;
    scanf("%d %d\n",&n,&key);
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    if(find(ar,n,key)==1)
    printf("YES");
    else
    printf("NO");
    return 0; }