#include <stdio.h>
int main(){
    int a1,a2,n,i;
    int T[n];
    scanf("%d %d %d",&a1,&a2,&n);
    T[0]=a1;
    T[1]=a2;
    if(n=1){printf("%d",a1);}
    else if(n=2){printf("%d",a2);}
    else {
    for(i>1;i<(n-1);i=i+1){
        T[i]=T[i-1]+T[i-2]-2; }
    printf("%d",T[i]); }
    return 0; }