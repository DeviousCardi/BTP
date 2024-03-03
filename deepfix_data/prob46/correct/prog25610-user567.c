#include <stdio.h>
int main() {
 int m,n;
 int num,count;
 scanf("%d",&m);
 scanf("%d",&n);
 count=0;
 for(int i=2;i<n;i++) {
        num=0;
        for(int j=2;j<i;j++) {
                if (i%j==0)
                {num=1;break;} }
        if(num==0) {
            if(n%i==0)
            {count=count+1;} } }
 if(m==count) {
     printf("YES"); }
 else {
    printf("NO"); }
    return 0; }