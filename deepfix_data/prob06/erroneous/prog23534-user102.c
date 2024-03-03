#include <stdio.h>
#include <stdlib.h>
int count=0;
int vest(int *u,int *v,int n,int m,int x,int y){
    int i,j,k=0;
    for(i=0;i<m;i++){
    for(j=k;j<n;j++){
    if(*(v+i)<=*(u+j)+y)&&*(v+i)>=*(u+j)-x)){
    printf("%d %d\n",j+1,i+1);
    count=count+1;
    k=j+1;
    break; }
    else continue; } }
    return count; }
int main() {
int n,m,x,y,i;
scanf("%d%d%d%d",&n,&m,&x,&y);
int *u,*v;
u=(int*)(malloc(n*sizeof(int)));
v=(int*)(malloc(m*sizeof(int)));
for(i=0;i<n;i++){
scanf("%d ",u+i); }
scanf("\n");
for(i=0;i<m;i++){
scanf("%d",v+i); }
int a=vest(u,v,n,m,x,y);
return 0; }