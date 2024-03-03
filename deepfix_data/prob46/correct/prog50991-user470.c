#include <stdio.h>
int main(){
    int m,n,i,count;
    scanf("%d",&m);
    scanf("%d",&n);
    count = 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count = count+1; } }
    if(count==m){
        printf("YES"); }
    else{
        printf("NO"); }
    return 0; }