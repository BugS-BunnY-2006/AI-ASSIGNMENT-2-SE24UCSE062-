#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char captcha[6];
    char input[20];
    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int i;

    srand(time(0));

    for(i = 0; i < 5; i++) {
        captcha[i] = chars[rand() % (sizeof(chars) - 1)];
    }
    captcha[5] = '\0';

    printf("CAPTCHA Verification\n");
    printf("Enter the following CAPTCHA: %s\n", captcha);

    printf("Input: ");
    scanf("%s", input);

    if(strcmp(captcha, input) == 0) {
        printf("CAPTCHA Verified! You are human.\n");
    } else {
        printf("Incorrect CAPTCHA. Verification Failed.\n");
    }

    return 0;
}
