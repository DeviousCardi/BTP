#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,u,v,i,j,k=0,J=0;
    scanf("%d",&u);
    scanf("%d",&v);
    scanf("%d",&x);
    scanf("%d",&y);
    int a[u],b[v],A[u],B[v];
    for(i=0; i<u; i++)
    scanf("%d",&a[i]);
    for(i=0; i<v; i++)
    scanf("%d",&b[i]);
    for(i=0; i<u; i++){
        for(j=J; j<v; j++){
            if((b[j]>=a[i]-x) && (a[i]+y>=b[j])){
                A[k]=i+1;
                B[k]=j+1;
                k++;
                J=j+1; } } }
    printf("%d\n",k);
    for(i=0; i<k; i++)
     printf("%d %d\n",A[i],B[i]);
	return 0; }