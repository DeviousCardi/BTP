#include <stdio.h>
#include <stdlib.h>
int a[10000],b[10000];
int n,m,x,y;
int i;
int c[10000],d[10000];
int count=0;
void test(int n,int m,int x,int y,int a[10000],int b[10000]) {
    if((a[n-1]-x<=b[j-1] && (b[j-1])<=a[n-1]+y) {
        count=count+1; }
    printf("%d\n",count);
    for(i=count-1;i>=0;i--) {
        printf("%d ",d[i]+1);
        printf("%d\n",c[i]+1); } }
int main(){
    scanf("%d%d%d%d",&n,&m,&x,&y);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<m;i++) {
        c[i]='i';
        d[i]='i';
        scanf("%d",&b[i]); }
    test(n,m,x,y,a,b);
	return 0; }