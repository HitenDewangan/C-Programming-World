#include <stdio.h>
int main() 
    {
            int x = 3, y = 7, z;
            z = x++ - --y*2;
			printf("\n%d",x)  ;     // operator precedence is -- then * then -
            printf("\n%d", z);           //x++ is processed after calculation
            return 0;
    }
