#include <stdio.h>
int main(){
    int o,k,i,j,n,m,initial[1000],index[1000],final[1000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
       scanf("%d ",&initial[i]); }
    printf("\n");
    for(j=0;j<n;j++){
       scanf("%d ",&index[i]); }
    for(k=0;k<n;k++){
        for(m=0;m<n;m++){
        if(k==index[m]){
            final[k]=initial[m]; } } }
    for(o=0;o<n;o++){
        printf("%d",&final[o]); }
    printf("end");
    return 0; }