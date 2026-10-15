#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums = 1202105;
    
    // Allocate space for 10 digits (0-9), initialized to 0
    int *freq = (int*)calloc(10, sizeof(int));
    
    int temp = nums;
    // Extract each digit and increment its frequency
    while (temp > 0) {
        int digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    // Print frequencies of digits present in the number
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            printf("Digit %d: %d\n", i, freq[i]);
        }
    }

    free(freq);
    return 0;
}
