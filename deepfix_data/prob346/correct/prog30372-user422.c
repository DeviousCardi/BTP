#include <stdio.h>
int main(){
    int a,i,b,c,j,k;
    c=0;
    k=0;
    scanf("%d",&a);
   int cost[100];
    for(i=0;i<a;i++){
      scanf("%d",&b) ;
      for(j=0;j<100;j++){
      if (j==b){
          cost[j]= c +1; }
      else{
           cost[j]=c; } } }
    printf("%d",cost[j]);
    for (j=0;j<100;j++){
        while (k<cost[j]){
            printf(" %d",j);
            k++; } }
    printf("end");
    return 0; }