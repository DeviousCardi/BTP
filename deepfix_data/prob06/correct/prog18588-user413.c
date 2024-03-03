#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,count=0;
    long int *ap,*bp;
    long int n,m,x,y,a[100001],b[100001];
    scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    for(i=0;i<m;i++) {
        scanf("%ld",&b[i]); }
    ap=a;
    bp=b;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++)
        {printf("%d \n",i);
            if(*(bp+j)>=(*(ap+i)-x)&&*(bp+i)<=(*(ap+i)+y))
            {printf("%dn\n",j);
                printf("%d %d\n",i+1,j+1);
                bp++;
                count++;
                j=m-1; } } }
	return 0; }