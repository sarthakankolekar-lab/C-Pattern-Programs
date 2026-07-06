//Code
#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);
    printf("\n");

    for (i = n; i > 0; i--) {
        for (j = 0;j < i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

/*Output

5

0 1 2 3 4 
0 1 2 3 
0 1 2 
0 1 
0 

*/