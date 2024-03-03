#include <stdio.h>
int main() {
    int n,i,c;
    scanf("%d\n",&n);
    int s[n];
    for(int x=0;x<n;x++) {
        scanf("%d ",&s[x]); }
    int a=s[0],b=s[0];
    for(i=1;i<n;i++) {
      if(a<s[i])
     { a=s[i]; }
       if(b>s[i]) {
           b=s[i]; }
       c=b;
       if(i==(n-1))
       {b=a;
       a=c; } }
    for(int k=0;k<n;k++) {
    printf("%d ",s[k]); }
    printf("end"); }