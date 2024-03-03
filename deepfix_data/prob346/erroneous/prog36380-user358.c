#include <stdio.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {scanf("%d ",&s[i]); }
    int a=s[0];
    for(int i=0;i<n;i++) {
        for(int j=1;j<(n-i);j++) {
         if(a>=s[j]) {
             a=s[j];
             x=j; } }
        printf("%d ",s[x]);
        s[x]=/0; }
    printf("end");
    return 0; }