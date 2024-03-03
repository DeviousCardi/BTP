#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d\n",&n);
    int s[n];
    for(int x=0;x<n;x++) {
        scanf("%d ",&s[x]); }
    int a=s[0];
    for(i=0;i<n;i++) {
      if(a<s[i+1])
      a=s[i+1]; }
    int b=s[0];
    for(j=0;j<(n-1);j++) {
        if(b>s[j+1])
        b=s[j+1]; }
    s[i+1]=s[j+1];
    s[j+1]=a;
    for(int k=0;k<n;k++) {
    printf("%d ",s[k]); }
    printf("end"); }