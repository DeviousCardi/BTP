#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<(2*n);i++)
        {scanf("%d ",&a[i]);}
    int count=0;
    int b=0;
    int c=0;
    for(i=0;i<2*n;i++) {
            for(j=0;j<2*n;j++) {
                if(a[i]==a[j])
                {count++;} }
        count=b;
        if(count>=b)
            {b=c;} }
    printf("%d",&c);
    return 0; }