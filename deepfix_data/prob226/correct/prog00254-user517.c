#include <stdio.h>
int main() {
    int d,N,b[20],l,m,a[30],i,j,p,k,sum=0;
    scanf("%d %d",&d,&N);
        for(i=0;i<d;i++){
            scanf("%d",&b[i]);
            a[i]=b[i]; }
    if((N<=d)){
        sum=a[0];
            for(m=1;m<N;m++){
                sum=sum+a[m]; }
            printf("%d",sum);
            return 0; }
    sum=0;
      for(j=0;j<d;j++){
        sum=sum+a[j]; }
    a[d]=sum;
        for(k=1;k<=N-d;){
            sum=0;
                for(l=d+k-1;l>k-1;l--){
                sum=sum+a[l]; }
        a[d+k]=sum;
       k++; }
    printf("%d",sum);
    return 0; }