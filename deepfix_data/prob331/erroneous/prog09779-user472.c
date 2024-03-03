#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
      {for(int j=0;j<n;j++){
        scanf("%d",&a);
        if(i==j){if(a==1){continue;}
            else{break;printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX");}
            if (i!=j)
            {if(a==0){continue;}
                else{br} } } } }
    return 0; }