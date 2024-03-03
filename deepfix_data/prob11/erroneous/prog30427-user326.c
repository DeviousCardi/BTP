#include <stdio.h>
int count=-1;
void swap(int n,int m) {
    int h=n;
    n=m;
    m=h; }
void find(int arr[],int n, int key) {
    if(count!=-1)
        return;
    if(key==0) {
        printf("YES");
        count++;
        return ; }
    if(key>0) {
        for(int i=0;i<n;i++) {
            int z=arr[i];
    int h=n;
    n=m;
    m=h;
            find(arr,n-1,key-z);
    int h=n;
    n=m;
    m=h; } }
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