#include<stdio.h>
int main() {
    int n,arr[20],i,j,k,temp,len[20],max_len=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        len[i]=1;
        temp=i;
        for(j=i+1;j<n;j++) {
            if(arr[i]<arr[j]) {
                len[temp]=len[temp]+1;
                i=j; }
            else
                continue; }
        i=temp; }
    for(i=0;i<n;i++) {
        if(max_len<len[i])
            max_len=len[i]; }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            len[i]=1;
            temp=i;
            for(k=j;k<n;k++) {
                if(arr[i]<arr[k]) {
                    len[temp]=len[temp]+1;
                    i=k; }
                else
                    continue; }
            if(max_len<len[temp])
                max_len=len[temp];
            i=temp; } }
    printf("%d",max_len);
    return 0; }