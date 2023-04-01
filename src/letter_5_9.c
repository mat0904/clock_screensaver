/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** letter_5_9.c
*/

#include "../include/prototype.h"

void print_5(char ch, int step)
{
    if (step == 0)
        printw("%c%c%c%c%c", ch, ch, ch, ch, ch);
    if (step == 1)
        printw("%c    ", ch);
    if (step == 2 || step == 4)
        printw("%c%c%c%c ", ch, ch, ch, ch);
    if (step == 3)
        printw("    %c", ch);
}

void print_6(char ch, int step)
{
    if (step == 0)
        printw(" %c%c%c ", ch, ch, ch);
    if (step == 1)
        printw("%c    ", ch);
    if (step == 2)
        printw("%c%c%c%c ", ch, ch, ch, ch);
    if (step == 3)
        printw("%c   %c", ch, ch);
    if (step == 4)
        printw(" %c%c%c ", ch, ch, ch);
}

void print_7(char ch, int step)
{
    if (step == 0)
        printw("%c%c%c%c%c", ch, ch, ch, ch, ch);
    if (step == 1)
        printw("    %c", ch);
    if (step == 2)
        printw("   %c ", ch);
    if (step == 3)
        printw("  %c  ", ch);
    if (step == 4)
        printw(" %c   ", ch);
}

void print_8(char ch, int step)
{
    if (step == 0 || step == 2 || step == 4)
        printw(" %c%c%c ", ch, ch, ch);
    if (step == 1 || step == 3)
        printw("%c   %c", ch, ch);
}

void print_9(char ch, int step)
{
    if (step == 0 || step == 4)
        printw(" %c%c%c ", ch, ch, ch);
    if (step == 1)
        printw("%c   %c", ch, ch);
    if (step == 2)
        printw(" %c%c%c%c", ch, ch, ch, ch);
    if (step == 3)
        printw("    %c", ch);
}
