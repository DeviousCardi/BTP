#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,t,i,j,k=0,a[20],b[20],count=0,tmp_i[20],tmp_j[20],flag;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);printf("%d",a[i]);}
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);printf("%d",a[i]);}
    printf("%d\n",count);
    if(count!=0) {
        for(i=0;i<count;i++) {
            printf("%d %d\n",tmp_i[i],tmp_j[i]); } }
	return 0; }