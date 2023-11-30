#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>

#include "triangolo.h"

int main()
{
    /** IMPORTANTE */
    /* NON MODIFICARE IL CONTENUTO DI QUESTO FILE!!! */

    int n_punti_test = 0;

    /** Test funzione calcola_area_triangolo */
    {
        float b, h, area;

        // Test
        b = 10.0F;
        h = 10.0F;
        area = calcola_area_triangolo(b, h);
        printf("L'area del triangolo di base %0.3f e altezza %0.3f e': %0.4f\n", b, h, area);
        assert((area > 50.0F - 0.01F) && (area < 50.0F + 0.01F));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        b = 58.0F;
        h = 27.78F;
        area = calcola_area_triangolo(b, h);
        printf("L'area del triangolo di base %0.3f e altezza %0.3f e': %0.4f\n", b, h, area);
        assert((area > 805.62F - 4.0F) && (area < 805.62F + 4.0F));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        b = 0.0F;
        h = 0.0F;
        area = calcola_area_triangolo(b, h);
        printf("L'area del triangolo di base %0.3f e altezza %0.3f e': %0.4f\n", b, h, area);
        assert(area == 0.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        b = -10.0F;
        h = -5.0F;
        area = calcola_area_triangolo(b, h);
        printf("L'area del triangolo di base %0.3f e altezza %0.3f e': %0.4f\n", b, h, area);
        assert(area == 0.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        b = INFINITY;
        h = 10;
        area = calcola_area_triangolo(b, h);
        printf("L'area del triangolo di base %0.3f e altezza %0.3f e': %0.4f\n", b, h, area);
        assert(isinf(area));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        b = 10;
        h = -INFINITY;
        area = calcola_area_triangolo(b, h);
        printf("L'area del triangolo di base %0.3f e altezza %0.3f e': %0.4f\n", b, h, area);
        assert(area == 0);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");
    }

    /** Test funzione calcola_arco_circonferenza*/
    {
        float c1, c2, ip;

        c1 = 3;
        c2 = 4;
        ip = calcola_ipotenusa(c1, c2);
        printf("La lunghezza dell'ipotenusa con cateti %0.3f e %0.3F e': %0.4f\n", c1, c2, ip);
        assert((ip > 5.0F - 0.01F) && (ip < 5.0F + 0.01F));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        c1 = 2;
        c2 = 8;
        ip = calcola_ipotenusa(c1, c2);
        printf("La lunghezza dell'ipotenusa con cateti %0.3f e %0.3F e': %0.4f\n", c1, c2, ip);
        assert((ip > 8.2462F - 0.01F) && (ip < 8.2462F + 0.01F));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        c1 = 18;
        c2 = -30;
        ip = calcola_ipotenusa(c1, c2);
        printf("La lunghezza dell'ipotenusa con cateti %0.3f e %0.3F e': %0.4f\n", c1, c2, ip);
        assert(isnan(ip));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        c1 = 30;
        c2 = 400;
        ip = calcola_ipotenusa(c1, c2);
        printf("La lunghezza dell'ipotenusa con cateti %0.3f e %0.3F e': %0.4f\n", c1, c2, ip);
        assert(ip == 100.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        c1 = 30;
        c2 = -7000;
        ip = calcola_ipotenusa(c1, c2);
        printf("La lunghezza dell'ipotenusa con cateti %0.3f e %0.3F e': %0.4f\n", c1, c2, ip);
        assert(isnan(ip));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");
    }

    /** Test funzione plot */
    // PUNTO BONUS!!!
    plot_area_triangolo(10, 120, 180);

    printf("Tutti i test sono andati a buon fine\n");
    printf("Punteggio finale: %d/%d\n", n_punti_test, n_punti_test);
    printf("Per il punto bonus: correzione manuale del professore\n");
    return n_punti_test;
}