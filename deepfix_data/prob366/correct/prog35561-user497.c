#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<(2*n);i++)
        {scanf("%d ",&a[i]);}
    int count=-1;
    int b;
    int c;
    for(i=0;i<2*n;i++) {
            for(j=0;j<2*n;j++) {
                if(a[i]==a[j])
                {count++;} }
        b=count;
        if(count>b)
            {c=b;} }
    printf("%d",c);
    return 0; }