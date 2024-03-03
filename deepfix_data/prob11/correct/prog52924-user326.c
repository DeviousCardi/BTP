#include <stdio.h>
int find(int arr[],int n, int key) {
    if(key>=0) {
        if(key==0)
        return 1;
        for(int i=n-1;i>=0;i--) {
            if(key==arr[i])
            return 1;
            else {
                int z=arr[i];
                return find(arr,n,key-z); } } }
    return 0; }
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
                ar[j]=ar[j]-ar[i]; } } }
    if(find(ar,n,key)==1)
    printf("YES");
    else
    printf("NO");
    return 0; }