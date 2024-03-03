#include <stdio.h>
int a1,a2,n;
int T(int n){
        if(n==1) {return a1;}
        else if(n==2) {return a2;}
        else {return T(n-1)+T(n-2)-2;} }
int main(){
    int a1,a2,n;
    int c = T(4);
    scanf("%d %d %d",&a1,&a2,&n);
    printf("%d %d %d",a1,a2,n);
    printf("%d", c);
    return 0; }