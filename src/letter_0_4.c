/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** letter_0_4.c
*/

#include "../include/prototype.h"

void print_0(char ch, int step)
{
    if (step == 0 || step == 4)
        printw(" %c%c%c ", ch, ch, ch);
    if (step >= 1 && step <= 3)
        printw("%c   %c", ch, ch);
}

void print_1(char ch, int step)
{
    if (step == 0)
        printw(" %c%c%c ", ch, ch, ch);
    if (step == 1)
        printw("%c %c%c ", ch, ch, ch);
    if (step == 2 || step == 3)
        printw("  %c%c ", ch, ch);
    if (step == 4)
        printw(" %c%c%c%c", ch, ch, ch, ch);
}

void print_2(char ch, int step)
{
    if (step == 0)
        printw(" %c%c%c ", ch, ch, ch);
    if (step == 1)
        printw("%c   %c", ch, ch);
    if (step == 2)
        printw("   %c ", ch);
    if (step == 3)
        printw(" %c   ", ch);
    if (step == 4)
        printw("%c%c%c%c%c", ch, ch, ch, ch, ch);
}

void print_3(char ch, int step)
{
    if (step == 0 || step == 4)
        printw("%c%c%c%c ", ch, ch, ch, ch);
    if (step == 1 || step == 3)
        printw("    %c", ch);
    if (step == 2)
        printw(" %c%c%c ", ch, ch, ch);
}

void print_4(char ch, int step)
{
    if (step == 0)
        printw("  %c%c ", ch, ch);
    if (step == 1)
        printw(" %c %c ", ch, ch);
    if (step == 2)
        printw("%c  %c ", ch, ch);
    if (step == 3)
        printw("%c%c%c%c%c", ch, ch, ch, ch, ch);
    if (step == 4)
        printw("   %c ", ch);
}
