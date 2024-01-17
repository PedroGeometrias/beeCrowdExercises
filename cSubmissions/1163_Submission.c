// CODE BY pedroGeometrias
// ID -> 1163
#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define G 9.80665

int main() {
    double altura, alfa, velocidade, Vox, Voy, Ts, H, Vfy, Td, Tt, D;
    int p1, p2, n;

    while(scanf("%lf", &altura) != EOF) {
        scanf("%d %d", &p1, &p2);
        scanf("%d", &n);

        for(int i = 0; i < n; i++) {
            scanf("%lf %lf", &alfa, &velocidade);

            alfa = alfa * PI / 180;
            Vox = velocidade * cos(alfa);
            Voy = velocidade * sin(alfa);

            Ts = Voy / G;
            H = (Voy * Voy) / (2 * G) + altura;
            Vfy = sqrt(2 * G * H);
            Td = Vfy / G;
            Tt = Ts + Td;
            D = Vox * Tt;

            if (D > p1 && D < p2)
                printf("%.5lf -> DUCK\n", D);
            else
                printf("%.5lf -> NUCK\n", D);
        }
    }

    return 0;
}

