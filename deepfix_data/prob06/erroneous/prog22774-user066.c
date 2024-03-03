#include <stdio.h>
#include <stdlib.h>
int *check(int n,int m,int x,int y,int *des_size, int *ava_size) {
    int i,j,count=0;
    for(i=0;i<n;i++) {
        j=count;
        if(j<m) {
            if((ava_size[j]<=des_size[i]+y)&&(ava_size[j]>=des_size[i]-x)) {
               count ++;
               printf("%d",i+1);
               printf(" ");
               printf("%d\n",j+1); } } }
    return count; }
int main() {
	int n,m,x,y;
	int *des_size;
	int *ava_size;
	des_size=(int*)malloc(100*sizeof(int));
	ava_size=(int*)malloc(100*sizeof(int));
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(i=0;i<n;i++) {
	   scanf("%s",des_size); }
	for(j=0;j<m;j++) {
	    scanf("%s",ava_size); }
	int count =check(n,m,x,y,des_size,ava_size);
	printf("%d",count);
	return 0; }