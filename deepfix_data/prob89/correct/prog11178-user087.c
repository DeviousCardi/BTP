#include <stdio.h>
int main(){
            int l,n,i,j,m;
            scanf("%d\n",&l);
            scanf("%d",&n);
            int a[n];
            for(i=0;i<n;i++) {
                    scanf("%d",&a[i]); }
                    for(i=0;i<n;i++) {
                            for(j=i+1;j<n;j++) {
                                if((a[i]+a[j])==l) {
                                        m=1;
                                        break; } }
                                if(m==1)
                                break; }
                        if(m==1)
                        printf("lucky");
                        else
                        printf("unlucky");
    return 0; }