#include <stdio.h>
int main(){
    int a,b,i,f,g;
    f=0;
    scanf("%d %d",&a,&b);
    for(i=2;i<b;i++){
    if((b%i)==0){
    f= f+1;}
    else{continue;
    };
    if(f==a){printf("YES");}
    else {printf("NO");} }
    return 0; }