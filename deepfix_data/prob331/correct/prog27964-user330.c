#include <stdio.h>
int main(){
      int a,i,j,b,t=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            scanf("%d",&b);
            if(i==j){
                if(b==1){
                    t++; } } }
        scanf("\n"); }
    if(t==a)printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",a,a);
    else printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",a,a);
    return 0; }