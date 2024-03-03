#include <stdio.h>
int main(){
    int n=0,i=0,j=0,required_t, required_k;
    int list[100];
    int seq[100];
    scanf("%d",&n);
    while(i<n){
    scanf("%d",&list[i]);
    i++; }
    int k=1;
    seq[0]=1;
    seq[k]=list[0];
    for (j;j<(2*n);j++){
          int m = seq[k];
          seq[k+1]=list[m-1];
          k = k+1; }
    required_t=0;
    for(int x=0;x<n;x++){
        int y=x;
        for( y=x;y<n;y++){
            if (seq[y]==seq[x]){
                required_t=y;
                break; } }
    required_k=y-x; }
    printf("%d %d",required_t, required_k);
    return 0; }