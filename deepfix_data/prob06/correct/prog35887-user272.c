#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i=0,j=0,count=0;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int vests[n],soldiers[m],pvests[n],psoldiers[m];
	for(i=0;i<n;i++)
	scanf("%d",&vests[i]);
	for(i=0;i<m;i++)
	scanf("%d",&soldiers[i]);
	i=0;j=0;
	 if((n==0)||(m==0)) {
        printf("0"); }
     if(n>0&&m>0) {
         while(i<m&&j<n) {
              if((vests[i]-x)<=soldiers[j]&&(vests[i]+y)>=soldiers[j]) {
                 pvests[count]=i+1;
                 psoldiers[count]=j+1;
                 i=i+1;
                 j=j+1;
                 count=count+1; }
              else if(vests[i]+y<soldiers[j]) {
                 i=i+1; }
              else {
                  j=j+1; } }
            printf("%d\n", count);
     for(i=0;i<count;i++) {
        printf("%d %d\n",pvests[i],psoldiers[i]); } }
	return 0; }