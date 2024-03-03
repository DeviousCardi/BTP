#include <stdio.h>
int main(){
    int i, t1, t2, n, tn;
    scanf("%d %d %d", &t2, &t1, &n);
    if( n > 2 ){
        for(i = 3; i <= n; i++){
            tn = t1 + t2 - 2;
            t2 = t1;
            t1 = tn; }
    }else if(n == 1){
        tn = t1 ;
    }else tn = t2 ;
    printf("%d", tn);
    return 0; }