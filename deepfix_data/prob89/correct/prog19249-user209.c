#include <stdio.h>
int main(){
    int k,sum,n;
    scanf("%d %d",&k,&n);
    int num[n];
    for( int i=0 ; i<n; i++)
        scanf("%d",&num[i]);
    for (int i=0 ; i<n-1 ; i++) {
        for(int j=i+1 ; j<n ; j++) {
            sum=num[i]+num[j];
            if(sum==k) {
                printf("lucky");
                return 0; } } }
    printf("unlucky");
    return 0; }