#include "../include/prototype.h"

static void get_current_time(char *time_str)
{
    time_t current_time;
    struct tm* time_info;

    time(&current_time);
    time_info = localtime(&current_time);

    sprintf(time_str, "%02d:%02d:%02d", time_info->tm_hour, time_info->tm_min, time_info->tm_sec);
}

static int gloop(void)
{
    int is_running = 1;

    while (is_running) {
        clear();
        char input = getch();
        if (input != ERR)
            is_running = 0;
        char time_str[9];
        get_current_time(time_str);
        display_letter_array(time_str, '0');
        refresh();
        usleep(100000);
    }
    return 0;
}

int my_clock(void)
{
    initscr();
    //noecho();
    //timeout(0);
    nodelay(stdscr, TRUE);
    gloop();
    endwin();
    return 0;
}
