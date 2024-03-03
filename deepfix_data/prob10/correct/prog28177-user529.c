# include <stdio.h>
int main() {
    int n,i,j,l,maxl=1,elem;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        l=1;
        elem=arr[i];
        for(j=i;j<n;j++) {
            if(arr[j]>elem) {
                elem=arr[j];
                l++; } }
        if(l>maxl)
            maxl=l; }
    printf("%d",maxl);
    return 0; }