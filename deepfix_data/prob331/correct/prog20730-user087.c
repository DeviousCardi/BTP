#include <stdio.h>
int main(){
            int n,i,j,flag=0,a;
            scanf("%d",&n);
            for(i=1;i<=n;i++) {
                    for(j=1;j<=n;j++) {
                            if(i==j) {
                                    scanf("%d",&a);
                                    if(a!=1) {
                                            flag=-1;
                                            break; } }
                            if(i!=j) {
                                    scanf("%d",&a);
                                    if(a!=0) {
                                            flag=-1;
                                            break; } }
                                if(flag==-1)
                                break; }
                        if(flag==-1)
                        break; }
                if(flag==0)
                printf("GIVEN %dx%d matrix is an IDENTITY MATRIX",n,n);
    return 0; }