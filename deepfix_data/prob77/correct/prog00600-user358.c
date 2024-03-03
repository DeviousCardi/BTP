#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d\n",&n);
    int s[n];
    for(int x=0;x<n;x++) {
        scanf("%d ",&s[x]); }
    int a=s[0],c;
    for(i=0;i<(n-1);i++) {
      if(a<s[i+1])
      a=s[i+1];
      if(i==(n-1))
      c=a; }
    int b=s[0];
    for(j=0;j<(n-1);j++) {
        if(b>s[j+1])
        b=s[j+1]; }
    a=b;
    b=c;
    for(int k=0;k<n;k++) {
    printf("%d ",s[k]); }
    printf("end"); }