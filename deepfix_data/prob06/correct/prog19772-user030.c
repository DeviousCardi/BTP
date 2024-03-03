#include <stdio.h>
#include <stdlib.h>
int main() {
    long long int m,n,x,y;
    int *a,*b,i,j,result[100000][2],count=0,start=0;
    scanf("%Ld%Ld%Ld%Ld",&n,&m,&x,&y);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    for(i=0;i<m;i++)
        scanf("%d",b+i);
    for(i=0;i<n;i++) {
        for(j=start;j<m;j++) {
            if(a[i]-x<=b[j] && b[j]<=a[i]+y) {
                result[count][0]=i+1;
                result[count][1]=j+1;
                start=j+1;
                count++;
                break; } } }
    printf("%d",count);
    for(i=0;i<count;i++)
        printf("%d %d\n",result[i][0],result[i][i]);
	return 0; }