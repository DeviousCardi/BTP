#include<stdio.h>
int main() {
    int n, arr[100], maxtill[100], i, j, len;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    maxtill[0]=arr[0];
    for(i=1;i<n;i++) {
        for(j=1;;) {
            if(arr[i]>maxtill[j-1])
              maxtill[j]=arr[i];
              j++; } }
    len=j;
    printf("%d",len);
    return 0; }