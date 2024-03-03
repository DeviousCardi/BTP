#include <stdio.h>
int count=-1;
void swap(int n,int m) {
    int h=n;
    n=m;
    m=h; }
void find(int arr[],int n, int key) {
    if(key==0) {
        printf("yes");
        count++;
        return ; }
    else if(key>0) {
        for(int i=0;i<n;i++) {
            int z=arr[i];
            swap(arr[i],arr[n-1]);
            find(arr,n-1,key-z);
            swap(arr[i],arr[n-1]); } } }
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