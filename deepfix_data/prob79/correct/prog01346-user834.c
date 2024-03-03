#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int *t=(int*)malloc(sizeof(int)*n);
	int i;
	int x,y;
	for(i=0;i<n;i++){
	    scanf("%d",(t+i)); }
	x=0;y=n-1;
	int t1=0,t2=0;
	if(x==y){
	    printf("1 0"); }
	else{
	while(x<n&&y>=0&&x>=y){
	    if(t1==0&&t2==0){
	    t1=t[x];
	    t2=t[y]; }
	    t1--;
	    t2--;
	    if(t1==0){
	        x++; }
	    if(t2==0){
	        y--; } }
	printf("%d %d",x,(y)); }
	return 0; }