#include <stdio.h>
int main(){
    int n,i,j,flag=0;
    int t,k;
    scanf("%d \n",&n);
    int room[n-1];
    int seq[n-1];
    seq[0]=1;
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
                for(j=i-1;j>=0;j--) {
                    if(seq[i]==seq[j]) {
                        t=i;
                        k=i-j;
                        printf("%d",t);
                        printf("%d",k);
                        break; } } } } }
    return 0; }