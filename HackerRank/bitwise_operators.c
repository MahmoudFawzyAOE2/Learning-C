#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k);


void calculate_the_maximum(int n, int k) 
{
    // i,j are counters for n, k respectivly 
    
    int j;
    int i;
    int max_and = 0;
    int max_or  = 0;
    int max_xor = 0;

    for (j=1; j<=k; j++) 
    {
        for (i=j+1; i<=n; i++)
        {
            if ((i&j) < k && (i&j) > max_and) max_and = (i&j);
            if ((i|j) < k && (i|j) > max_or) max_or = (i|j);
            if ((i^j) < k && (i^j) > max_xor) max_xor = (i^j);
        }
    }
    
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}