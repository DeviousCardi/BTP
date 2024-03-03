#include <stdio.h>
int main(){
    int n,num,a,b;
    int list[201];
    scanf("%d",&n);
    b=200;
    for(int length=0;length<2n;length++){
        scanf("%d",&num);
        list[length]=num; }
    for(int i=0;i<2n;i++){
        for(int j=i+1;j<2n;j++){
            if(arr[i]==arr[j]){
                a=j-i;
                if(a<b){
                    b=a; } } } }
    printf("%d",b)
    return 0; }