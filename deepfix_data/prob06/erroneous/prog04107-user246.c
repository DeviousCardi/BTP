#include <stdio.h>
#include <stdlib.h>
int c=0,n,m,x,y;
int assign(int *des,int* av,int i,int j) {
    int a=0,b=0;
    if((i==n)||(j==m))
    return c;
    if(*(av+i)<=*(des+j)+y))
    a=1;
    if(*(av+i)>=*(des+j)-x)
    b=1;
    if(a&&b) {
        *(des+i)=*(av+j);
        c++;
        return assign(des,av,i+1,j+1); }
    else if(a)
    return assign(des,av,i+1,j);
    else if(b)
    return assign(des,av,i,j+1); }
int main() {
	int i;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int *des_vest=(int*)malloc(n*sizeof(int));
	int *av_vest=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",des_vest+i);
	for(i=0;i<n;i++)
	scanf("%d",av_vest+i);
    assign(n,m,x,y,des_vest,av_vest,0,0);
	return 0; }