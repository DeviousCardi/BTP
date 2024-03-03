#include <stdio.h>
int main() {
    int c,e,i,s[100];
    scanf("%d",&c);
    for(int k=0;k<c;k++) {
        scanf("%c",&s[i]); }
    scanf("%d",&e);
    for(i=0;i<e;i++) {
        s[i]=s[i+c-e]; }
  for(i=e;i<c;i++) {
      s[i]=s[i-e]; }
  for(int j=0;j<c;j++) {
      printf("%c",s[j]); }
    return 0; }