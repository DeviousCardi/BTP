#include <stdio.h>
void find(int arr[],int n, int key) {
    if(key>=0) {
        if(key==0)
        printf("YES");
        for(int i=n-1;i>=0;i--) {
                int z=arr[i];
                find(arr,n,key-z); } } }
int main() {
    int n,key;
    scanf("%d %d\n",&n,&key);
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            if(ar[i]>ar[j]) {
                ar[j]=ar[j]+ar[i];
                ar[i]=ar[j]-ar[i];
                ar[j]=ar[j]-ar[i]; }
            }}
    return 0; }