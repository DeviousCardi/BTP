#include <stdio.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {scanf("%d ",&s[i]); }
    int a=s[0];
    for(int i=0;i<n;i++) {
        for(int j=1;j<(n-i-1);j++) {
         if(a>=s[j]) {
             a=s[j];
             x=j; } }
        printf("%d ",s[x]);
        if(x<(n-i-1))
        {for(int k=x;k<(n-i-1);k++)
        s[k]=s[k+1]; }
        a=s[0]; }
    printf("end");
    return 0; }