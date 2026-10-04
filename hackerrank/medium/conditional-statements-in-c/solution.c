#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Array containing English words for numbers 1 to 9
    char *words[] = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    if (n >= 1 && n <= 9) {
        printf("%s\n", words[n - 1]);
    } else if (n > 9) {
        printf("Greater than 9\n");
    }

    return 0;
}
