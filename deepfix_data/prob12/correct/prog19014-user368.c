#include <stdio.h>
int main(){
    int n,num,a,b;
    int list[201];
    scanf("%d",&n);
    b=200;
    for(int length=0;length<2*n;length++){
        scanf("%d ",&num);
        list[length]=num; }
    for(int i=0;i<2*n-1;i++){
        for(int j=i+1;j<2*n;j++){
            if(list[i]==list[j]&&i!=j){
                a=j-i;
                if(a<b){
                    b=a; } } } }
    printf("%d",b);
    return 0; }