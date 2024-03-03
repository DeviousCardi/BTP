#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y, * noofsol,* noofvest,j;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&x);
	scanf("%d",&y);
	noofsol=(int*)malloc(n*sizeof(int));
	noofvest=(int*)malloc(m*sizeof(int));
	for(j=0;j<n;j++) {
	    scanf("%d",(noofsol+j)); }
	for(j=0;j<m;j++) {
	    scanf("%d",(noofvest+j)); }
	int count=0,i,k=0,a[50][50];
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	   if(*(noofsol+i)-x<=*(noofvest+j)&&*(noofsol+i)+y>=*(noofvest+j)) {
	            count++;
	            a[k][0]=*(noofsol+i);
	            a[k][1]=count;
	            k++;
	            *(noofvest+j)=0;
	            break; } } }
	printf("%d\n",count);
	for(k=0;k<count;k++) {
	    printf("%d %d\n",a[k][0],a[k][1]); }
	return 0; }