//Code
#include <stdio.h>

int main() {
    int n, i, j, a=1;

    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++) {
        for (j = 0;j < i; j++) {
            printf("%d ", a);
            a += 1;
        }
        printf("\n");
    }

    return 0;
}

/*Output

4

1 
2 3 
4 5 6 
7 8 9 10 

*/