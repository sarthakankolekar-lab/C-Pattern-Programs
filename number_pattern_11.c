//Code
#include <stdio.h>

int main() {
    int n, i, j, a, b, k;

    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++) {
        b = i - n;
        if (b < 0){
            for (k = b*-2;k > 0; k--){
                printf(" ");
            }
        }
        for (j = 0;j < i; j++) {
            a = j + 1;
            printf("%d ", a);
        }
        printf("\n");
    }

    return 0;
}

/*Output

5

        1 
      1 2 
    1 2 3 
  1 2 3 4 
1 2 3 4 5 

*/