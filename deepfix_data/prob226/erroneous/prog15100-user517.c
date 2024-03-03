#include <stdio.h>
int main() {
    int d,N,b[20],l,m,a[30],i,j,sum=0;
    scanf("%d %d",&d,&N);
        for(i=0;i<d;i++){
            scanf("%d",&b[i]); }
        for(p=0;p<d;p++){
            a[p]=b[p]; }
    if((N<=d)){
        for(m=0;m<N;m++){
            sum=sum+a[m]; }
        printf("%d",sum);
        return 0; }
    sum=0;
      for(j=0;j<d;j++){
        sum=sum+b[j]; }
     a[d]=sum;
    for(k=1;k<N-d){
        sum=0;
        for(l=d+k-1;l>k-1;l--){
            sum=sum+a[l]; }
        a[d+k]=sum;
        k++; }
	return 0; }