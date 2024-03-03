#include<stdio.h>
int main() {
    int n,s[100],t[200]
    n=0;
    scanf("%d\n",&n);
    int i=0;
    for(i=0;i<2*n;i++) {
      scanf("%d",&s[i]); }
    int j=0;
    for(i=0;i<2*n;i++) {
    for(j=i+1;j<2*n;j++) {
    if(s[i]==s[j])
    {t[i]=j;}
    }}
for(i=0;i<2*n;i=i+1) {
    for(j=i;j<2*n;j=j+1) {
        if(t[i]<t[j]) {
            printf("%d",t[i]); } } }
    return 0; }