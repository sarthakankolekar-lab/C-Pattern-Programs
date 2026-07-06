//Code
#include <stdio.h>

int main() {
    int n, i, j, a;

    scanf("%d", &n);
    printf("\n");
    
    for (i = 1; i <= n; i++) {
        for (a = 0; a < i; a++) {
            printf("%d ",i);
        }
        for (j = i+1; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

/*Output

5

1 2 3 4 5 
2 2 3 4 5 
3 3 3 4 5 
4 4 4 4 5 
5 5 5 5 5 

*/