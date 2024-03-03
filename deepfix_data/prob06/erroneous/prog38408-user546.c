#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	int a[n],b[m];
	for(i=1;i<=n;i++) {
        scanf("%d ",&a[i]); }
    for(i=1;i<=n;i++) {
        scanf("%d ",&b[i]); }
    int count=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            else(((a[i]-x)<=b[j])&&((a[i]+y)>=b[j])) {
                count++; } } }
    printf("%d\n",count);
    for(i=1;i<=n;i++) {
      for(j=1;j<=m;j++) {
          if(((a[i]-x)<=b[j])&&((a[i]+y)>=b[j])) {
              printf("%d %d",i,j);
              printf("\n"); } } }
	return 0; }