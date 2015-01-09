//
//  11.6.c
//  C Primer Plus
//
//  Created by Jason Dubaniewicz on 1/8/15.
//  Copyright (c) 2015 Jason Dubaniewicz. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char *strncopy(char *, char *, unsigned long n);

int main(void)
{
    char str1[128] = "Hey, I wonder when we'll ";
    char *str2 = "go to the movies";
    char *str3 = strncopy(str1, str2, 4);
    
    printf("%s\n", str3);
    return 0;
}

char *strncopy(char *s1, char *s2, unsigned long n)
{
    int cnt = 0;
    char *ch = s1;
    
    while (*++s1);
    
    while (cnt++ < n && *s2)
        *s1++ = *s2++;
    
    return ch;
}