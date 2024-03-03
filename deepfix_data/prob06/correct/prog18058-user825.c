#include <stdio.h>
#include <stdlib.h>
int main()
{   int k =0;
    int count=0;
    int i,j;
    int n,m,x,y;
    int a[200],b[200];
    int as[200],bs[200];
    scanf("%d %d %d %d\n",&n,&m,&x,&y);
    for(i = 1 ; i<=n ; i++){
        scanf("%d",&a[i]); }
    for(j = 1 ; j<=m ;j++){
        scanf("%d",&b[j]); }
    for(i=1;i<=n;i++) {
     for(j=k+1;j<=m;j++) {
            if(a[i]>=(b[j]-x)&&a[i]<=(b[j]+y))
            {  count++;
               as[k]=i;
               bs[k]=j;
               k++;
              break; } } }
    printf("%d\n",count);
    for(i= 0; i<k ;i++) {
      printf("%d %d\n",as[k],bs[k]); }
	return 0; }