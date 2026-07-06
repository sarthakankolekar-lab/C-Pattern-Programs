//Code
#include <stdio.h>

int main() {
    int n, i, j,a=1;

    scanf("%d", &n);
    printf("\n");

    for (i = n; i > 0; i--) {
        for (j = 0;j < i; j++) {
            printf("%d ", a);
        }
        printf("\n");
        a += 1;
    }

    return 0;
}

/*Output

5

1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5 

*/