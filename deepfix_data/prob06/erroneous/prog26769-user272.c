#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,k,m,x,y,i=0,j=0,count=0;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int vests[n],soldiers[m],pvests[n],psoldiers[m];
	for(i=0;i<n;i++)
	scanf("%d ",&vests[i]);
	for(i=0;i<m;i++)
	scanf("%d ",&soldiers[i]);
	 if(n==0||m==0)
     printf("0");
     if(n>0&&m>0) {
         while(i<m) {
         if(vests[j]-x<=soldiers[i]&&vests[j]+y>=soldiers[i]) {
           pvests[k]=i+1;
           psoldiers[k]=j+1;
           i=i+1;
           k=k+1;
           count=count+1; }
         if(vests[j]+y<soldiers[i]||vests[j]-x>soldiers[i]) {
           i=i+1; }
        if(j+1>n) {
           break; }
      }do(j++) }
     printf("%d \n",count);
     for(i=0;i<count;i++)
     printf("%d %d\n",pvests[i],psoldiers[i]);
	return 0; }