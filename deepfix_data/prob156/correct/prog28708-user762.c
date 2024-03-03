#include <stdio.h>
int main() {
    int n,m,i,j,temp;
    scanf("%d %d",&n,&m);
    int a[n][m],s[n];
    for(i=0;i<n;i++)
    {  s[i]=0;
       for(j=0;j<m;j++) {
         scanf("%d ",&a[i][j]); } }
      for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
         s[i]+=a[i][j]; } }
     for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]>=a[j]) {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp; } } }
   i=n-1;
   printf("%d",s[n-1]);
    return 0; }