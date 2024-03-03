#include <stdio.h>
int main(){
    int n,i,t=1,k=0,m;
    scanf("%d",&n);
    int room[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&room[i]);
        for(j=i+1;j<n;j++) {
            if(room[j]==room[i]) {
                t=t+j-i;
                for(m=j+1;m<n;k++) {
                    if(room[m]==room[j]) {
                        k=m-j;
                        printf("%d %d",t,k); } } } } }
    return 0; }