#include <stdio.h>
int main(){
    int by,digsum=0,ly,tmp,aux;
    scanf("%d",&by);
    tmp=by;
    while(tmp>0){
        digsum=digsum+(tmp%10);
        tmp=tmp/10; }
    aux=by-(by%digsum);
    ly=aux+digsum;
    printf("%d",ly);
    return 0; }