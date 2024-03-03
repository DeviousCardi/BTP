#include <stdio.h>
int main() {
    int N1,N2,i,j,k,m,n,flag=0;
    int a1[20],a2[20];
    scanf("%d",&N1);
        for(i=0;i<N1;i++){
            scanf("%d ",&a1[i]); }
    scanf("%d",&N2);
        for(j=0;j<N2;j++){
            scanf("%d ",&a2[j]); }
            for(k=0;k<N2;k++){
                if(a1[0]==a2[k]){
                    break;
                    flag=1; } }
        if(flag==0){
            printf("No"); }
        if(flag==1){
            int m=0,n=k;
          for(;m<N1;){
              if(a1[m]==a2[n]){
                  continue;
                  m++;
                  n++ }
              if(a1[m]!=a2[n]){
                  printf("No");
                  return 0; } } }
        if(flag==1);
        printf("YES");
	return 0; }