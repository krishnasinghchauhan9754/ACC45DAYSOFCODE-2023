#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int cars_needed = (N + 3) / 4;

        printf("%d\n", cars_needed);
    }

    return 0;
}
