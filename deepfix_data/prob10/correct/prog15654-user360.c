#include<stdio.h>
int main() {
    int n, arr[100], maxtill[100], i, j, len, k,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    if(n==1)
       printf("%d",1);
    else
    {   for(i=0;i<len;++i)
            maxtill[i]=1;
        for(i=0;i<len;++i) {
            max=arr[i];
           for(k=i;k>=0;k++) {
              if(arr[k]<max) {
                    maxtill[i]++;
                    max=arr[k]; }
                printf("%d ",maxtill[i]); } }
        max=maxtill[0];
        for(i=1;i<len;i++) {
            if(maxtill[i]>max)
              max=maxtill[i]; }
        printf("%d ",max); }
    return 0; }