#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
            int n,i;int num=0;
            scanf("%d",&n);
          if(n<=pow(10,8)) {
            for(i=1;i<=n/2;i++) {
                if(n%i==0)
                { num=num+i;} }
            if(num==n)
            {printf("YES");}
            else{printf("NO");}}
	return 0; }