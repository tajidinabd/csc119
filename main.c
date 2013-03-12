/* 
 * File:    main.c
 * Author:  http://cprogramminglanguage.net
 * Purpose: Demonstrates C for loop : counter
 */
#include <stdio.h>

int main(void) {
    
    /* count down from 10*/
    int waits = 10;
    int s;
    for(s = waits; s > 0;s--)
        printf("%d\n",s);
    printf("Happy New Year!\n");
    
    /* count by 3*/
    for(s = 0; s < 10; s+=3)
        printf("%d\n",s);
    
    
    /*count by character */
    char c;
    for(c = 'a'; c <= 'z'; c++)
        printf("ASCII(%c) = %d\n",c,c);
    
    return 0;
}
