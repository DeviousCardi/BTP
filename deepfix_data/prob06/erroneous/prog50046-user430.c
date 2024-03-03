#include <stdio.h>
#include <stdlib.h>
void army(int a[],int b[],int c[],int d[],int x,int y){
    int i,j,count=0,c[100],d[100];
    for(i=0;i<n;i++){
	   for(j=0;j<m;j++){
	      if(a[i]>=b[j]-x && a[i]<=b[j]+y){
	        c[count]=i+1;d[count]=j+1;
	        count++;
	        b[j]=-100;break; } } }
	 printf("%d\n",count);
	 for(i=0;i<count;i++){
	 if(i!=count-1)
	 printf("%d %d\n",c[i],d[i]);
	 else printf("%d %d",c[i],d[i]);} }
int main() {
	int n,m,x,y,a[100],b[100],c[100],d[100],count=0,i,j;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	  scanf("%d",&b[i]);
	army(a,b,c,d,x,y);
	return 0; }