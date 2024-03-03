#include <stdio.h>
#include <stdlib.h>
int main() {
    int *a,*d,i,j,n,m,x,p=0,q=0,y;
    scanf("%d %d %d %d\n",&n,&m,&x,&y);
    a=(int*)malloc(sizeof(int)*n);
    d=(int*)malloc(sizeof(int)*m);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
     for(i=0;i<m;i++) {
        scanf("%d",&d[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(*(a+i)>=(*(d+j)-x)&&*(a+i)<=(*(d+j)+y)) {
                p++;
                c[q][0]=i+1;
                c[q][1]=j+1;
                d[j]=d[j]-1345;
                q++;
                break; } } }
    printf("%d\n",p)
    for(i=0;i<p;i++) {
        for(j=0;j<2;j++) {
            printf("%d",c[i][j]);
            if(j<1)
            printf(" "); }
        printf("\n"); }
	return 0; }