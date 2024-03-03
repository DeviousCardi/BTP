#include <stdio.h>
#include <math.h>
int main(){
    int n,i,j,dis,mindis,arr[401];
    scanf("%d",&n);
    for(i=1,i<=2*n;i++){
        scanf("%d",&arr[i]); }
    mindis=2*n-1;
    for(i=1;i<2*n;i++){
        for(j=1;j<=2*n;j++){
            if(arr[i]==arr[j]){
                if(i==j){
                    continue; }
                else{
                    dis=abs(i-j);
                    if (dis<mindis){
                        mindis=dis; }
                    break; } } } }
    printf("%d",mindis);
    return 0; }