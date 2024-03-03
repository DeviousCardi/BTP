#include <stdio.h>
#include <stdlib.h>
int main() {int amt;
            float tax=0;
            scanf("%d",&amt);
            if(amt>200000&&amt<=500000)
                tax=0.1*(amt-200000);
            else if(amt>500000&&amt<=1000000)
                tax=30000+0.2*(amt-500000);
            else if(amt>1000000)
                tax=130000+0.3*(amt-1000000);
	return 0; }