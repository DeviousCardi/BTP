#include <stdio.h>
#include <stdlib.h>
int main() {
    int i ,j;
    int n,m,x,y;
    int a[10],b[10];
    int as[10],bs[10];
    scanf("%d %d %d %d\n",&n,&m,&x,&y);
    for(i = 0 ; i<n ; i++){
        scanf("%d ",&a[i]); }
    for(j = 0 ; j<m ;j++){
        scanf("%d ",&b[j]);
    }    scanf("\n");
    int k =0;
    for(i = 0; i<n;i++){
    for(j = k; j<m; j++){
        if(a[i]>=b[j]-x)&&(a[i]<=b[j]+y))) {
               as[k]=i;
               bs[k]=j;
               k++; } } }
    printf("%d\n",k);
    for(i = 0; i<k ;k++){
      printf("%d %d\n",as[k],bs[k]); }
	return 0; }