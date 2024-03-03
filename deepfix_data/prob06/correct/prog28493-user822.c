#include <stdio.h>
#include <stdlib.h>
int *A; int *B;
int a,b,c,d,count=0;
void input() {
    int i;
    for(i=0;i<a;i++) {
	    scanf("%d",A+i); }
	for(i=0;i<b;i++) {
	    scanf("%d",B+i); } }
void check() {
    int i,j;
    for(i=0;i<a;i++) {
        for(j=0;j<b;j++) {
            if(*(A+i)-c<*(B+j)&&*(A+i)+d>*(B+j)) {
                count+=1; } } }
    printf("%d ",count); }
int main() {
    scanf("%d %d %d %d",&a,&b,&c,&d);
    A=(int*)malloc(a*sizeof(int));
    B=(int*)malloc(b*sizeof(int));
    input();
	check();
	return 0; }