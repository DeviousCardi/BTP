#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n,m,x,y,count=0;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    int man[n],size[m];
    for(i=0;i<n;i++) {
        scanf("%d",&man[i]); }
    printf("\n");
     for(j=0;j<m;j++) {
        scanf("%d",&size[j]); }
    for(i=0;i<n;i++)
    {   count=0
        for(j=0;j<m;j++) {
            if((size[j]>=(man[i]-x))&&(size[j]<=(man[i]+y)))
            count++;
            if(count==1)
            break; }
        printf("%d\n",count); }
	return 0; }