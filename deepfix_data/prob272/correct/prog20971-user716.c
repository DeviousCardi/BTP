#include <stdio.h>
int T(int n,int a1,int a2){
        if(n==1) {return a1;}
        else if(n==2) {return a2;}
        else {return (T(n-1,a1,a2)+T(n-2,a1,a2)-2);} }
int main(){
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    int c = T(4,a1,a2);
    printf("%d %d %d\n",a1,a2,n);
    printf("%d", c);
    return 0; }