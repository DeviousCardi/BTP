#include<stdio.h>
int main() {
    int n,i,j,s[12344],p=0,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(s[i]<s[j]) {
                cnt++; }
            else {
                i=j;
                break; } }
        if(cnt>p)
        p=cnt; }
    printf("%d",cnt);
    return 0; }