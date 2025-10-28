#include <stdio.h>
#include "gcl/color.h"
#include "gcl/file.h"

int main() {
    int lenofccomp = file_length("test.c");
    char readrez[lenofccomp];
    printf("The file is %d characters long\n", lenofccomp);
    read_file(readrez, "test.c");
    printf("%s\n", readrez);

    printf("Hello world\n");
    printf("%s%s%s%s%sYou can also get crazy with it%s%s%s!!%s\n", BACK_GREEN, FORE_RED, STYLE_UNDERLINE, STYLE_BOLD, STYLE_BLINK, RESET_ALL, BACK_BLUE, FORE_YELLOW, RESET_ALL);
    return 0;
}