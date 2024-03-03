#include <stdio.h>
int main(){
 int by,n1,n2,n3,n4,z,t;
 scanf("%d",&by);
 n1=by%10;
 n2=(by%100-by%10)/10;
 n3=(by%1000-by%100)/100;
 n4=(by-(n3*100+n2*10+n1))/1000;
 t=n1+n2+n3+n4;
 printf("%d",2016-(2016%t)+t);
    return 0; }