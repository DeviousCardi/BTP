#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr1[i]);
    for(int i=0;i<n;i++)
    arr2[(arr[i]-1)]++;
    int rep,mis;
    for(int i=0;i<n;i++) {
        if(arr[i]==2)
        rep=arr[i]; }
    for(int i=0;i<n;i++) {
        if(arr[i]==0)
        mis=arr[i]; }
    printf("%d\n%d",rep,mis);
    return 0; }