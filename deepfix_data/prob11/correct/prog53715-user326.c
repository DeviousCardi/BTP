#include <stdio.h>
int find(int arr[],int n, int key) {
    for(int i=0;i<n;i++) {
        if(key==arr[i])
        return 1;
        else {
            int z=arr[i];
            arr[i]=0;
            find(arr,n,key-z); } }
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