#include <stdio.h>
int main() {
        int n,ly,sum,temp;
        sum=0;
        ly=2016;
        scanf("%d",&n);
        temp=n;
        while(temp>0) {
                sum+=temp%10;
                temp/=10; }
        for(;;) {
                if(ly%sum==0)
                    break;
                else
                    ly++; }
        printf("%d",ly);
        return 0; }