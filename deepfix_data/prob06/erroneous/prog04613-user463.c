#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int k,x,y;
void putonjersey(int *a,int *b) {
    if((*a!=k)||(*b=k))
    return;
    if((((*a)-x)<=*b)&&(((*a)+y)>=*b)) {
        putonjersey(a+1,b+1) } }
int main() {
    int n,m,*a,*b;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    int i;
    a=(int*)(malloc(n*sizeof(int)));
    for(i=0;i<n;i++) {
        scanf("%d",(a+i)); }
     b=(int*)(malloc(m*sizeof(int)));
    for(i=0;i<m;i++) {
        scanf("%d",(b+i)); }
	return 0; }