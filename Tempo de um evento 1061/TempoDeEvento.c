#include <stdio.h>

int main() {
    char dia[4];
    int d1, d2, h1, h2, m1, m2, s1, s2;
    int totalDias, totalHoras, totalMinutos, totalSegundos;

    scanf("%s %d", dia, &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%s %d", dia, &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    totalSegundos = (d2 - d1) * 86400 + (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);

    totalDias = totalSegundos / 86400;
    totalSegundos = totalSegundos % 86400;
    totalHoras = totalSegundos / 3600;
    totalSegundos = totalSegundos % 3600;
    totalMinutos = totalSegundos / 60;
    totalSegundos = totalSegundos % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", totalDias, totalHoras, totalMinutos, totalSegundos);

    return 0;
}
