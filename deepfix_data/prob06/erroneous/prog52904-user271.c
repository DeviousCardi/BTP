#include <stdio.h>
#include <stdlib.h>
int equipjacket(int *a,int *b,int x,int y)
{    int n=strlen(a),m=strlen(b);
    int i,j,count=0;
    for(i=0;i<n;i++) {
        for(j=i;j<m;j++) {
            if((*(b+j)>*(a+i)-x)&&(*(b+j)<*(a+i)+y))
            count++; } }
    return count; }
int main() {
    int n,m,x,y;
    scanf("%d%d%d%d\n",&n,&m,&x,&y);
    int ai[n],bi[m];
    for(i=0;i<n;i++)
    scanf("%d",&ai[i])
    printf("\n");
    for(i=0;i<m;i++)
    scanf("%d",bi[i]);
    printf("%d",equipjacket(ai,bi,x,y));
	return 0; }