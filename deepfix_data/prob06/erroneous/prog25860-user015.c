#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y;
    int i,j;
    int *a,*b;
    int count;
    count=0;
    scanf("%d %d %d %d\n",&n,&m,&x,&y);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("\n");
    b=(int*)malloc(m*sizeof(int));
    for(j=0;j<m;j++){
        scanf("%d",&b[j]); }
    for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if((a[i]-x<=b[j])&&(b[j]<=a[i]+y)){
            printf("%d %d\n",i+1,j+1);
            count++;
            break;
        else
        continue; } } }
	return 0; }