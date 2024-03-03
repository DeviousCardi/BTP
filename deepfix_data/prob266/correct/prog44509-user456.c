#include <stdio.h>
int main(){
 int by,ly,n1,n2,n3,n4,z,t;
 scanf("%d",&by);
 n1=by%10;
 n2=(by%100-by%10)/10;
 n3=(by%1000-by%100)/100;
 n4=(by-(n3*100+n2*10+n1))/1000;
 t=n1+n2+n3+n4;
 z=by%t;
 ly=by-z+t;
 if(ly>=2016)
 printf("%d",ly);
 else printf("%d",ly+t);
    return 0; }