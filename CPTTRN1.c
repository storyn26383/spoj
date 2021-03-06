#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        int row, colunm;
        char *map = "*.";

        scanf("%d %d", &row, &colunm);

        for (int j = 1; j <= row; j++) {
            int flag = 1;

            if (j & 1) {
                flag = 0;
            }

            for (int k = 1; k <= colunm; k++) {
                printf("%c", map[flag]);

                flag = (flag + 1) % 2;
            }

            printf("\n");
        }

        printf("\n");
    }

	return 0;
}
