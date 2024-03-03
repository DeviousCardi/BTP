#include <stdio.h>
#include <stdlib.h>
int max_sol(int*p, int*q,int ,int);
int a[100], b[100], n, m;
int main() {
	int x,y;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int i, j;
	for(i=0;i<n; i++)
	  scanf("%d",&a[i]);
	for(i=0; i<m; i++)
	  scanf("%d",&b[i]);
	int *p1, *p2;
	p1=a;
	p2=b;
	int k= max_sol(p1,p2, x,y);
	printf("%d",k);
	return 0; }
int max_sol(int *q1, int *q2,int x,int y) {
    int k =0,i, j=0;
    for(i=0; i<n; i++) {
        if( (*(q1+i)-x) > (*(q2+j))){
            j++; }
        if(((*(q1+i)-x)<= (*(q2+j)) ) && ( (*(q2+j)) <=(*(q1+i)+y) ) ) {
            k++;
            j++;
            continue; }
        else if((*(q2+j)) > (*(q1+i)+y) {
            continue; } } }