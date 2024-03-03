#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<(2*n);i++)
        {scanf("%d ",&a[i]);}
    int b=0;
    int c;
    for(i=0;i<(2*n);i++) {
            for(j=0;j<(2*n);j++)
            {  int count=0;
                if(a[i]==a[j])
                {count++;} }
        b=count;
        if(count>b)
            {c=b;} }
    printf("%d",c);
    return 0; }