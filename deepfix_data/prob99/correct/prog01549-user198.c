#include<stdio.h>
int main() {
    int n,i,j,s[12344],p=0,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
        for(j=1,cnt=1;j<n;j++) {
            if(s[0]<s[j]) {
                cnt++;
                s[0]=s[j]; } }
    printf("%d",cnt);
    return 0; }