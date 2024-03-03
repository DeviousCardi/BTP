#include <stdio.h>
int main(){
    int i,n,t,k,x=0;
    scanf("%d/n",&n);
    int s[101] ;
    for(i=1;i<101;i++){
        scanf("%d",&s[i]); }
    int a[101] = {0,1,s[1]};
    for(i=2;i<101;i++){
        a[i+1]=s[a[i]]; }
    for(i=1;i<101;i++){if (x!=0) {break;}
        for(t=1;t<100;t++){
        if (a[i] == a[i+t])  x++ ; break;} }
        for(k=1;k<100;k++){
            if (a[i+t]==a[i+k+t]) break; }
        printf ("%d %d",t,k);
    return 0; }