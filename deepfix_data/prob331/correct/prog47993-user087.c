#include <stdio.h>
int main(){
            int n,i,j,flag=0,a,b;
            scanf("%d",&n);
            for(i=1;i<=n;i++) {
                    for(j=1;j<=n;j++) {
                            if(i==j)
                            scanf("%d",&a);
                            else if(i!=j)
                            scanf("%d",&b);
                            if(a==1 && b==0)
                            flag=1;
                            else
                            flag=0; }
                        printf("\n");
                        if(flag==0)
                        break; }
                if(flag==1)
                printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
                else
                printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }