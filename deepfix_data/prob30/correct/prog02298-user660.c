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
            if(diff<min_diff) {
                    second_max=arr[i];
                    min_diff=diff;
                    p=0; } }
    return second_max; }
int main() {
        int k,i,j,temp,max,l;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(l=0;l<n-1;l++) {
                if(arr[i]>arr[i+1]) {
                        temp=arr[i];
                        arr[i]=arr[i+1];
                        arr[i+1]=temp; } }
            max=arr[n];
            printf("%d\n",max);
        for(j=1;j<k;j++) {
                max=getMaxLessThan(max);
                printf("%d\n",max); }
        return 0; }