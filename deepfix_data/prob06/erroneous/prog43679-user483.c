#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,j,count=0,flag=0;
    scanf("%d %d %d %d",&n,&m,&x,&y );
    int *a;
    int *b;
    a=(int*)malloc((n) * sizeof(int));
    b=(int*)malloc((m) * sizeof(int));
     for(i=0;i<n;i++) {
   scanf("%d ",&a[i]); }
      for(j=0;j<m;j++) {
   scanf("%d ",&b[j]); }
     for(i=0;i<m;i++) {
         for(j=i;j<n;j++)
         { int flag=0;
        if((b[i]>=a[j]-x)&&(b[i]<=a[j]+y)) {
             count=count+1;
         break; } } }
         printf("%d\n",count);
          for(i=0;i<m;i++) {
         for(j=i;j<n;j++){
        if(flag==1) {
            printf("%d\n",b[i]) } }
	return 0; }