#include<stdio.h>
int main() {
    int n,arr[20],maxTill[20],i,j,max=0;;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    maxTill[0]=1;
    for(i=1;i<n;i++) {
            for(j=0;j<i;j++) {
                    if(arr[j]<arr[i]) {
                            if(max<maxTill[j])
                                max=maxTill[j]; }
                };
            maxTill[i]=max+1;
            max=0; }
    for(i=0;i<n;i++) {
            if(max<maxTill[i])
            max=maxTill[i]; }
    printf("%d",max);
    return 0; }