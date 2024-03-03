#include <stdio.h>
int main() {
    int n,i=0,p;
    scanf("%d",&n);
    int arr[n],noc[n+1];
    for(int l=0;l<n+1;l++)
        noc[l]=0;
    for(int l=0;l<n-1;l++){
        scanf("%d,",&arr[i]);
        noc[arr[i]]++;
        i++; }
    scanf("%d",&arr[n-1]);
    noc[arr[n-1]]++;
    for(p=1;p<=n;p++){
        if(p!=noc[p] && noc[p]!=0 && noc[0]!=0)
            break; }
    if(p==n+1)
        printf("Yes");
    else
        printf("No");
    return 0; }