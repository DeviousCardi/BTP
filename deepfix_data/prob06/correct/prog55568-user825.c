#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
    int n,m,x,y;
    int a[20],b[20];
    int as[100],bs[200];
    scanf("%d %d %d %d",&n,&m,&x,&y);
    for(i = 1 ; i<=n ; i++){
        scanf("%d ",&a[i]); }
    for(j = 1 ; j<=m ;j++){
        scanf("%d ",&b[j]); }
    int k =0;
    int count=0;
    for(i = 1; i<=n; i++){
        for(j = k+1; j<=m; j++){
        if((a[i]>=b[j]-x)&&(a[i]<=b[j]+y))
            { count++;
               as[k]=i;
               bs[m]=j;
               k++;
                              break; } } }
    printf("%d\n",count);
    for(i = 0; i<k ;k++) {
      printf("%d %d\n",as[k],bs[k]); }
	return 0; }