#include <stdio.h>
int main() {
    int n,m,flag=0,i,j,d;
    int a[n],b[m];
     scanf(" %d",&n);
    for(i=0;i<n;i++) {
        scanf(" %d",&a[i]); }
    scanf(" %d",&m);
    for(j=0;j<m;j++) {
           scanf(" %d",&b[j]); }
    for(i=0;i<n;i++) {
       if(a[i]==b[0])
       d=i; }
   for(i=d;i<d+m;i++) {
        for(j=0;j<m;j++)
        if(a[i]==b[j])
        flag=flag+1; }
      if(flag==m)
      printf("YES");
      else
      printf("NO");
	return 0; }