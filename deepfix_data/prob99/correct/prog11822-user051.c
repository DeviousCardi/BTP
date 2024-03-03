#include<stdio.h>
int main() {
    int n,arr[20],i,j,temp,len[20],max_len=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        len[i]=1;
        for(j=i+1;j<n;j++) {
            if(arr[i]<arr[j]) {
                len[i]=len[i]+1;
                temp=i;
                i=j; }
            else
                continue; }
        i=temp; }
    for(i=0;i<n;i++) {
        if(max_len<len[i])
            max_len=len[i]; }
    printf("%d",max_len);
    return 0; }