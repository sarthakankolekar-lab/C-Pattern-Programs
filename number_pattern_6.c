//Code
#include <stdio.h>

int main() {
    int n, i, j, a=1;

    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++) {
        for (j = 0;j < i; j++) {
            printf("%d ", a);
        }
        printf("\n");
        a+=2;
    }

    return 0;
}

/*Output

5

1 
3 3 
5 5 5 
7 7 7 7 
9 9 9 9 9 

*/