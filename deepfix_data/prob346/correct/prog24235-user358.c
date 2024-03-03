#include <stdio.h>
int main(){
    int n,x=0,j;
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
        printf("%d ",s[j]);
        for(int k=x;k<(n-i-x-1);k++)
        s[k]=s[k+1];
        a=s[0]; }
    printf("end");
    return 0; }