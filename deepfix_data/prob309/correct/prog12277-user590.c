#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],d=1;
    for(int i=0;i<n;i++)
    scanf("%d,",&arr[i]);
    for(int i=0;i<n;i++) {
        int c=1;
        for(int j=i+1;i<n;i++) {
            if(arr[j]==arr[i])
            c++; }
        if(c==arr[i])
        d++; }
    if(d==n)
    printf("Yes");
    else
    printf("No");
    return 0; }