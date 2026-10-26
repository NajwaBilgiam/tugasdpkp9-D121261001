#include <stdio.h>

int main(int argc, char * argv[]) {
    if (argc < 2 ) {
        printf("Argumen program kurang\n");
        printf("tambahkan argumen seperti %s %s %s", argv[0], "baso", "besse");
        return -1;
    }
    printf("hello %s\n", argv[1]);
    printf("hello juga %s\n", argv[2]);
    return 0;
}