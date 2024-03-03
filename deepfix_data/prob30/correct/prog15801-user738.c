#include <stdio.h>
int arr[100]={0};
int n,i,k;
int getMaxLessThan(int upperLimit) {
    int temp;
     for(i=0;i<n-1;i++) {
        for(int j=0;j<=n;j++) {
            if(arr[i]<arr[j])
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp; }
        return temp; } }
int main() {
        int l;
         scanf("%d",&n);
        scanf("%d",&k);
        for(i=0;i<n;i++) {
                 scanf("%d",&arr[i]); }
                l=getMaxLessThan(100);
        for(i=0;i<k;i++) {
                int p=getMaxLessThan(l);
                printf("%d",p);
                l=p; }
    return 0; }