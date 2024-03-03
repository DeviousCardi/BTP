#include <stdio.h>
int main() {
    int n,noc[100],i=0,max=0,p;
    scanf("%d",&n);
    int arr[n];
    for(int l=0;l<100;l++)
        noc[l]=0;
    for(int l=0;l<n-1;l++){
        scanf("%d,",&arr[i]);
        noc[arr[i]]++;
        if(arr[i]>max)
            max=arr[i];
        i++; }
    scanf("%d",&arr[n-1]);
    noc[arr[n-1]]++;
    if(arr[n-1]>max)
        max=arr[n-1];
    i++;
    for(p=1;p<=max;p++){
        if(p!=noc[p])
            break; }
    if(p==max+1)
        printf("Yes");
    else
        printf("No");
    return 0; }