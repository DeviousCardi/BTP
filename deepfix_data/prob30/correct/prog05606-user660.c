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
        int k,i,j,max,m;
        scanf("%d%d%d",&n,&k,&arr[0]);
        max=arr[0];
        for(i=1;i<n;i++) {
                scanf("%d",&arr[i]);
                if(arr[i]>max)
                    max=arr[i]; }
        printf("%d\n",max);
        for(j=1;j<k;j++) {
                max=getMaxLessThan(max);
                printf("%d\n",max); }
        return 0; }