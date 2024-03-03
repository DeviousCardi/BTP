#include <stdio.h>
int main(){
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    int T(1)=a1;
    int T(2)=a2;
    int i;
    for(i=3;i<=n;i++) {
        T(i)=T(i-1)+T(i-2)-2; }
    printf("%d",T(n))
    return 0; }