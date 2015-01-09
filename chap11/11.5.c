//
//  11.5.c
//  C Primer Plus
//
//  Created by Jason Dubaniewicz on 1/8/15.
//  Copyright (c) 2015 Jason Dubaniewicz. All rights reserved.
//

#include <stdio.h>

int is_within(char, char *);

int main(void)
{
    char c = 'T';
    char *str = "The Count of Monte Cristo";
    
    if (is_within(c, str)) {
        printf("Yep.\n");
    }
    else {
        printf("Nope.\n");
    }
    
    return 0;
}

int is_within(char c, char *str)
{
    while (*str)
        if (*str++ == c)
            return 1;
    return 0;
}