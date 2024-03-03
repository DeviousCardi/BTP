#include<stdio.h>
int main() {
    int n,s[100],t[200],min=0;
    n=0;
    scanf("%d\n",&n);
    int i=0;
    for(i=0;i<2*n;i++) {
      scanf("%d",&s[i]); }
    int j=0;
    for(i=0;i<2*n;i++)
    for(j=0;j<2*n;j++)
    if(s[i]==s[j])
    t[i]=(j-i);
for(i=0;i<n;i=i+1) {
    for(j=i;j<n;j=j+1) {
        if(t[i]<t[j]) {
            min=t[j];
            t[j]=t[i];
            t[i]=min; } } }
printf("%d",t[0]);
    return 0; }