#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,x,y,i,j,p,q;
    scanf("%d%d%d%d\n",&a,&b,&x,&y);
    int v=0;
    int *m,*n;
    m=(int*)malloc(a*sizeof(int));
    n=(int*)malloc(b*sizeof(int));
    for(i=0;i<a;i++){
    scanf("%d\n",m+i); }
    for(j=0;j<b;j++){
    scanf("%d\n",n+j); }
    int count=0;
    for(p=0;p<b;p++){
    for(q=p;q<a;q++){
    if((*(m+q)-x<=*(n+p))&&(*(n+p)<=*(n+q)+y)){
    count=count+1;
    break;
    }}}
    printf("%d\n",count);
    for(p=0;p<b;p++){
    for(q=v;q<a;q++){
    if(*(n+q)-x<=*(m+p)&&*(m+p)<=*(n+q)+q){
        v=v+1;
    printf("%d%d\n",q+1,p+1);
    break;}
    else v++;} }
	return 0; }