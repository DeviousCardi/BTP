#include <stdio.h>
int arr[100];
int n;
int getMaxLessThan(int upperLimit) {
    int i,diff,second_max,min_diff,p=1;
    for(i=0;i<=n;i++) {
            diff=upperLimit-arr[i];
            if(diff<=0)
                continue;
            if(p) {
                    min_diff=diff; }
                p=0;
            if(diff<min_diff) {
                    second_max=arr[i];
                    min_diff=diff; } }
    return second_max; }
int main() {
        int k,i,j,temp,max,l,m;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(l=0;l<n-1;l++) {
                if(arr[l]>arr[l+1]) {
                        temp=arr[l];
                        arr[l]=arr[l+1];
                        arr[l+1]=temp; } }
            max=arr[n-1];
            printf("%d\n",max);
            printf("%d",getMaxLessThan(596));
        return 0; }