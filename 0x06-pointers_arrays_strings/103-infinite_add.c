#include "main.h"
#include <string.h>
/**
 * main -  a function that adds two numbers.
 *Return: Always 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    // Initialize variables and pointers
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = size_r - 1;
    r[k] = '\0';

    // Add digits from right to left, until one of the numbers is fully processed
    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) sum += n1[i--] - '0';
        if (j >= 0) sum += n2[j--] - '0';
        carry = sum / 10;
        if (k <= 0) return 0; // Not enough space in buffer
        r[--k] = sum % 10 + '0';
    }

    // If there is still a carry, add it to the result
    if (carry > 0) {
        if (k <= 0) return 0; // Not enough space in buffer
        r[--k] = carry + '0';
    }

    // If the result does not fit in the buffer, return 0
    if (k == 0 && (i >= 0 || j >= 0 || carry > 0)) return 0;

    // Return a pointer to the result
    return &r[k];
}
