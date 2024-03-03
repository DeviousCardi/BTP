#include <stdio.h>
int main() {
    int N,sum=0,count=0,i,j,k,z=0;
    scanf("%d",&N);
    int a[1000];
    for(i=0;i<N;i++){
        scanf("%d ",&a[j]); }
    for(j=0;j<N;j++){
        z=a[j];
        count=0;
        for(k=j+1;k<N;k++){
            if(z>a[k]){
                count++;
                continue;
                printf("%d",count); }
            sum=sum+count; } }
    printf("%d",sum);
    return 0; }