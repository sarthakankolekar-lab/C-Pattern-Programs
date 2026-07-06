//Code
#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);
    printf("\n");

    for (i = n; i > 0; i--) {
        for (j = 0;j < i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

/*Output

5

5 5 5 5 5 
4 4 4 4 
3 3 3
2 2
1

*/