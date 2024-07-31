#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int d5 = n / 10000;
    int d4 = n / 1000 % 10;
    int d3 = n / 100 % 10;
    int d2 = n / 10 % 10;
    int d1 = n % 10;
    printf("%d", d5+d4+d3+d2+d1);
    return 0;
}
