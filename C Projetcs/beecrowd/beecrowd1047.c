#include <stdio.h>


int main() {

    int h1, m1, h2, m2;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int start_minutes = h1 * 60 + m1; // convert hours to minutes
    int end_minutes = h2 * 60 + m2; // convert hours to minutes
    int duration_minutes;

    if (start_minutes == end_minutes) { // if the start and end time are the same
        duration_minutes = 24 * 60;
    } else if (start_minutes < end_minutes) { // if the start time is less than the end time
        duration_minutes = end_minutes - start_minutes;
    } else { // if the start time is greater than the end time
        duration_minutes = (24 * 60 - start_minutes) + end_minutes;
    }

    int duration_hours = duration_minutes / 60; // convert minutes to hours
    int duration_remaining_minutes = duration_minutes % 60; // get the remaining minutes

    /*
        if(h1 == h2 && m1 == m2) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else if(h1 == h2 && m1 < m2) {
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", m2 - m1);
    } else if(h1 == h2 && m1 > m2) {
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", 60 - m1 + m2);
    } else if(h1 < h2 && m1 == m2) {
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", h2 - h1);
    } else if(h1 < h2 && m1 < m2) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2 - h1, m2 - m1);
    } else if(h1 < h2 && m1 > m2) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2 - h1 - 1, 60 - m1 + m2);
    } else if(h1 > h2 && m1 == m2) {
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", 24 - h1 + h2);
    } else if(h1 > h2 && m1 < m2) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24 - h1 + h2, m2 - m1);
    } else if(h1 > h2 && m1 > m2) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24 - h1 + h2 - 1, 60 - m1 + m2);
    }
    */

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hours, duration_remaining_minutes);

    return 0;
}