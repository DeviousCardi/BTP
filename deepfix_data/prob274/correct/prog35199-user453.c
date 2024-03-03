#include <stdio.h>
int main(){
    int n,i,j,flag=0;
    int t,k;
    int room[n-1];
    int seq[n-1];
    seq[0]=1;
    scanf("%d \n",&n);
    if(n>=2&&n<=100) {
        for(i=0;i<n;i++) {
                scanf("%d ",&room[i]); }
       for(j=0;j<n;j++) {
            if(room[j]<1&&room[j]>n&&room[j]==j+1)
             flag=1; }
        if(flag==0) {
            for(i=1;i<n;i++) {
                int g=seq[i-1];
                seq[i]=room[g-1];
                printf("%d",seq[i]); } } }
    return 0; }