# include <stdio.h>
int main() {
    int n,i,j,l,maxl=0,elem;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[n]);
    for(i=0;i<n;i++) {
        l=0;
        elem=arr[i];
        for(j=0;j<n;j++) {
            if(arr[j]>elem) {
                elem=arr[j];
                l++; } }
        if(l>maxl)
            maxl=l; } }