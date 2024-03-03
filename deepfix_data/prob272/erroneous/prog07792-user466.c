#include <stdio.h>
int main(){
    int T(n-1),T(n-2),T(n),n,a1,a2;
    scanf("%d",&n);
    scanf("%d",&a1);
    scanf("%d",&a2);
    for(n=3;n<=4;n++) {
        T(n)=T(n-1)+T(n-2)-2; }
    printf("%d",T(n));
    return 0; }