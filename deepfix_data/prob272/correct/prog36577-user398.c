#include <stdio.h>
int main(){
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    if(n==1)
    printf("%d",a1);
    if(n==2)
    printf("%d",a2);
    if(n>2){
        int t1=a1,t2=a2,t3=a1+a2-2;
        for(int i=3;i<=n;i++){
            t3 = t3 + t2 -2;
            t2 = t3;
            printf("%d\n",t3); } }
    return 0; }