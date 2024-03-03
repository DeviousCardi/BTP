#include <stdio.h>
int main(){
    int n,a[400];
    int count[400],countmax;
    scanf("%d",&n);
    for(int i=0;i<(2*n);i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<(2*n);i++){
        count[i]=1;
        for(int j=i+1;j<(2*n-1);j++){
            if(a[i]==a[j])
                break;
            else
                count[i]++; } }
    countmax=count[0];
    for(int i=0;i<(2*n-1);i++){
        for(int j=0;j<(2*n-1);j++){
            if(count[i]>count[j])
                countmax=count[j]; } }
    printf("%d",countmax);
    return 0; }