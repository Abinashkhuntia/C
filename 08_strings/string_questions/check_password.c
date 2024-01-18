#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int passwordcheck(char *ppass, char *cp, int min, int length) {
    if (length == min)
        return 1;
    else if (length < min)
        return 2;
    if ({
        for (int i = 0; i < length; i++) {
            if (ppass[i] == cp[i])
                return 0;
        }
    } ==0 )
    return 0;
}

int main() {
    char pass[30];
    int min = 8;
    char cp[] = "chianu45";
    printf("Enter your password: ");
    fgets(pass, sizeof(pass), stdin);
    int length = strlen(pass);
    int find = passwordcheck(pass, cp, min, length);
    if (find == 0)
        printf("Invalid\n");
    else if (find == 1)
        printf("Valid\n");
    else if (find == 2)
        printf("Must be 8 characters long\n");
    return 0;
}