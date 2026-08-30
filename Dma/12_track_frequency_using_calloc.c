#include <stdio.h>
#include <stdlib.h>
int main() {
    int * freq, n, i, x;
    printf("Enter number of values: ");
    scanf("%d", &n);
    freq = calloc(100, sizeof(int));
    if (freq == NULL) return 0;
    printf("Enter values from 0 to 99: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x >= 0 && x < 100) freq[x]++;
    }
    for (i = 0; i < 100; i++) if (freq[i] > 0) printf("%d = %d\n", i, freq[i]);
    free(freq);
    return 0;
}
