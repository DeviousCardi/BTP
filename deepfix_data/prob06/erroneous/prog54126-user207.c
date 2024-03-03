#include <stdio.h>
#include <stdlib.h>
int *put(int *s,int *v,int i,int j,int x,int y){
    int *ps,*pv,c;
    ps=s,pv=v;
    if((*(pv+j)>=*(ps+i)-x)&&(*(pv+j)<=*(ps+i)+y)){
    c=*(pv+j);
    return c;} }
int equip(int *s,int *v,int i,int j,int x,int y){
   int *p1,*p2,k=0;
   p1=s,p2=v;
           if(put(s,v,i,j,x,y)==*(p2+j)) {
           k++; }
   return k; }
int main() {
	int n,m,x,y,i,j,k=0,s[100],v[100];
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	for(i=0;i<n;i++){
	    scanf("%d",&s[i]); }
	for(i=0;i<m;i++){
	    scanf("%d",&v[i]); }
     for(i=0;i<m;i++){
	  if(put(s,v,i,j,x,y)
	  k++; }
     printf("%d",k);
	return 0; }