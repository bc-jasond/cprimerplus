#include <stdio.h>
#include <stdlib.h>

struct month {
    char name[10];
    char abrv[4];
    short days;
    short number;
};

static struct month year[12] = {
    { "January",   "JAN", 31, 0 },
    { "February",  "FEB", 28, 1 },
    { "March",     "MAR", 31, 2 },
    { "April",     "APR", 30, 3 },
    { "May",       "MAY", 31, 4 },
    { "June",      "JUN", 30, 5 },
    { "July",      "JUL", 31, 6 },
    { "August",    "AUG", 31, 7 },
    { "September", "SEP", 30, 8 },
    { "October",   "OCT", 31, 9 },
    { "November",  "NOV", 30, 10 },
    { "December",  "DEC", 31, 11 },
};

short num_days(struct month *, struct month (* yr)[12] );
void print_mon(struct month *);

int main(int argc, char * argv[])
{
    short mnum, total_days;
    struct month * mon = year;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s month (1-12)\n", argv[0]);
        exit(1);
    }

    if (!(mnum = (short) atoi(argv[1])) || (mnum < 1 || mnum > 12)) {
        fprintf(stderr, "Enter an number from 1 to 12.\n");
        exit(2);
    }

    total_days = 0;
    for (int count = 0; count < mnum; count++, mon++) {
        total_days += mon->days;
    }

    printf("There are %d days from the beginning of the year through %s.\n", total_days, (--mon)->name);
    return 0;
}
