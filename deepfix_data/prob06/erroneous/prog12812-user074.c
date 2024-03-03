#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,m,x,y,*des,*avl;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	des=(int*)malloc(n*sizeof(int));
	avl=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++) {
	       scanf("%d",&des[i]); }
	scanf("\n");
	for(i=0;i<m;i++) {
	       scanf("%d",&avl[i]); }
	int k=0;
	for(i=0;i<n;i++) {
	        for(j=0;j<m;j++) {
	                if(des[i]-x<=avl[j] && des[i]+y>=avl[j] && avl[j]!=0) {
	                        avl[j]=0;
	                        str2[k]=j;
	                        str1[k]=i;
	                        k++; } } }
	printf("%d\n",k)
	for(i=0;i<2;i++) {
	        printf("%d %d",str1[i],str2[i]); }
	printf("\n");
	return 0; }