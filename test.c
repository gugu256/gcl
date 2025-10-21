#include <stdio.h>
#include "gcl/color.h"

int main() {
    printf("Hello world\n");
    printf("%s%s%s%s%sYou can also get crazy with it%s%s%s!!%s\n", BACK_GREEN, FORE_RED, STYLE_UNDERLINE, STYLE_BOLD, STYLE_BLINK, RESET_ALL, BACK_BLUE, FORE_YELLOW, RESET_ALL);
    return 0;
}