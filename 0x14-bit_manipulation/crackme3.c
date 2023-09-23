#include <stdio.h>
#include "101-password.h"

int main(int argc, char *argv[]) {
    FILE *file;
    char password[100];

    if (argc != 2) {
        printf("Usage: %s <password_file>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Failed to open the password file.\n");
        return 1;
    }

    fscanf(file, "%s", password);

    if (strcmp(password, "password123") == 0) {
        printf("Congratulations!\n");
    } else {
        printf("Wrong password. Try again.\n");
    }

    fclose(file);

    return 0;
}
