#include <stdio.h>
int main(){
    int n,k,i,p;
    scanf("%d\n%d\n",&k,&n);
    int seq[n];
    scanf("%d",&seq[n]);
    for(i=0;i<n;i++) {
    for(p=1;p<=n-p;p++){
        if ((seq[i]+seq[i+p])==k){
            printf("lucky");} } }
return 0; }