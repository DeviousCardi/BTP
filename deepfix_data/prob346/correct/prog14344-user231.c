#include <stdio.h>
int main(){
    int a,b,c,d,n;
    scanf("%d",&n);
    if(n<=10000){
        int m[n];
        for(a=0;a<=n-1;a++){
            scanf("%d",&m[a]); }
        for(b=0;b<=99;b++){
            int count;
            for(c=0;c<=n-1;c++){
                if(b==m[c]){
                    count=count+1; } }
            for(d=1;d<=count;count++){
                printf("%d ",b); } } }
    printf("end");
    return 0; }