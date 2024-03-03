#include <stdio.h>
int main(){
        int i,j,x,n;
        scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            {scanf("%d",&x);}
                if(i==j){
                    if((x==1)||(x!=1))
      printf("GIVEN n x n matrix is an IDENTITY MATRIX");}
 else
     {printf("GIVEN n x n matrix is not an IDENTITY MATRIX"); }
        return 0; }