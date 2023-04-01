/*
** EPITECH PROJECT, 2023
** B-CPE-210-LYN-2-1-stumper3-mathieu.borel
** File description:
** display.c
*/

#include "../include/prototype.h"

void display_letter_symbol(char date_digit, char character, int i)
{
    switch(date_digit) {
        case ':':
            print_symbol_point(character, i);
        break;
    }
}

void display_letter_next(char date_digit, char character, int i)
{
    switch (date_digit) {
        case '5':
            print_5(character, i);
            break;
        case '6':
            print_6(character, i);
            break;
        case '7':
            print_7(character, i);
            break;
        case '8':
            print_8(character, i);
            break;
        case '9':
            print_9(character, i);
            break;
        default:
            display_letter_symbol(date_digit, character, i);
            break;
    }
}

void display_letter(char date_digit, char character, int i)
{
    switch (date_digit) {
        case '0':
            print_0(character, i);
            break;
        case '1':
            print_1(character, i);
            break;
        case '2':
            print_2(character, i);
            break;
        case '3':
            print_3(character, i);
            break;
        case '4':
            print_4(character, i);
            break;
        default:
            display_letter_next(date_digit, character, i);
            break;
    }
}

int display_letter_part(char *date, char character, int i)
{
    int j = 0;

    while (date[j + 1] != '\0') {
        display_letter(date[j], character, i);
        printw(" ");
        j += 1;
    }
    display_letter(date[j], character, i);
    return 0;
}

int display_letter_array(char *date, char character)
{
    int i = 0;

    while (i != 5) {
        move(LINES / 2 + i, COLS / 2 - 21);
        display_letter_part(date, character, i);
        printw("\n");
        i += 1;
    }
    return 0;
}
