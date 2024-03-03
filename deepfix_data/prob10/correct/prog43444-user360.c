#include<stdio.h>
int main() {
    int n, arr[100], maxtill[100], i, j, len, k,max;
    scanf("%d",&n);
    len=n;
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    if(len==1)
       printf("%d",1);
    else
    {   for(i=0;i<len;++i)
            maxtill[i]=1;
        for(i=1;i<len;i++) {
            for(k=i-1;k>=0;k--) {
                if(arr[k]<arr[i]) {
                    if(maxtill[k]>=maxtill[i]-1)
                      maxtill[i]=maxtill[k]+1; } }
            max=maxtill[0];
            for(i=1;i<len;i++) {
                if(maxtill[i]>max)
                   max=maxtill[i]; }
            printf("%d",max); } }
    return 0; }