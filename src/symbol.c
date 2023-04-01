#include "../include/prototype.h"

void print_symbol_point(char ch, int step)
{
    if (step == 1 || step == 3)
        printw("  %c  ", ch);
    else
        printw("     ");
}
