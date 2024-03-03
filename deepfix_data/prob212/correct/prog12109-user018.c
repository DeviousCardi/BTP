#include <stdio.h>
int main(){
    int by,digsum=0,ly=2016,tmp,aux;
    scanf("%d",&by);
    tmp=by;
    while(tmp>0){
        digsum=digsum+(tmp%10);
        tmp=tmp/10; }
    aux=digsum-(ly%digsum);
    ly=ly+aux;
    printf("%d",ly);
    return 0; }