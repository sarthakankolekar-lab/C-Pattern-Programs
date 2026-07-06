//Code
#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);
    printf("\n");

    for (i = n; i > 0; i--) {
        for (j = i;j > 0; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

/*Output

5

5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1 

*/