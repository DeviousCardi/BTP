#include<stdio.h>
int main() {
    int n, arr[100], maxtill[100], i, j, len;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    if(n==1)
       printf("%d",1);
    else {
        maxtill[0]=arr[0];
        i=1;
        j=1;
        len=0;
        while(i<n) {
            if(arr[i]>maxtill[j-1]) {
                maxtill[j]=arr[i];
                i++;
                j++; }
            else
               i++; }
        len=j;
        printf("%d",len); }
    return 0; }