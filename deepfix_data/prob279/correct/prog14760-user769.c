#include <stdio.h>
int main() {
    int n,i,j,count=0;
    int s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&s[i]);
        for(j=0;j<n;j++) {
            if(s[i]==s[j]) {
                printf("%d\n",i);break; }
            else {
                count=count+1;
                continue; }
        if(s[i]==s[i]+1){
            printf("%d",s[i]+1); } }
    return 0; } }