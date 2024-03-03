#include <stdio.h>
int main(){
        int n,k,i;
        scanf("%d",&n);
        scanf("%d",&k);
        int x[n],y[k+1],z[n];
        for (i=0;i<=k;i++){
                y[i]=0; }
        for(i=0;i<n;i++){
                scanf("%d",&x[i])
                for(j=0;j<=k;j++){
                        if (x[i]==j){
                                y[j]=y[j]+1;
                                break; } } }
        int total=0
        for(i=0;i<=k;i++){
                oldcount=y[i];
                y[i]=total;
                total=total+oldcount; }
        for(i=0;i<n;i++){
                    int m=a[i];
                    z[y[m]]=m;
                    y[m]=y[m]+1; }
        for(i=0;i<n;i++){
                printf("%d ",z[i]); }
        return 0; }