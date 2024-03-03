#include <stdio.h>
int main(){
    int k,a[100],l,i,j,m,n,count;
    count=0;
    scanf("%d\n%d\n",&k,&l);
    for(i=0;i<l;i++){
        scanf("%d ",&a[i]); }
    for(j=0;j<l;j++){
        if(k==a[j]){
        printf("lucky");
        count++;
        break; } }
    for(m=0;m<l;m++){
        for(n=0;n<l;n++){
            if(a[m]+a[n]==k){
                printf("lucky");
                break;
                count++; } }
      if(count==0){
          printf("unlucky"); } }
    return 0; }