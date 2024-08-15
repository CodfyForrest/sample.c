#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <number>\n", argv[0]);
        return 1;
    }

    char *endptr;
    long index = strtol(argv[1], &endptr, 10);

    if (*endptr != '\0' || index < 1 || index > 4) {
        fprintf(stderr, "Invalid selection.\n");
        return 1;
    }

    char *items[] = {"boat", "car", "truck", "train"};
    printf("You selected %s\n", items[index-1]);

    return 0;
}
