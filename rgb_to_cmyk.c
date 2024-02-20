#include <stdio.h>

void rgbToCmyk(int r, int g, int b, double *c, double *m, double *y, double *k) {
    // Convert RGB values to CMY values
    double cmyC = 1 - (r / 255.0);
    double cmyM = 1 - (g / 255.0);
    double cmyY = 1 - (b / 255.0);

    // Find the minimum value among CMY values
    double minCMY = (cmyC < cmyM) ? ((cmyC < cmyY) ? cmyC : cmyY) : ((cmyM < cmyY) ? cmyM : cmyY);

    // Calculate CMYK values
    *c = (minCMY == 1) ? 0 : (cmyC - minCMY) / (1 - minCMY);
    *m = (minCMY == 1) ? 0 : (cmyM - minCMY) / (1 - minCMY);
    *y = (minCMY == 1) ? 0 : (cmyY - minCMY) / (1 - minCMY);
    *k = minCMY;
}

int main() {
    int r, g, b;
    printf("Enter the RGB values (0-255): ");
    scanf("%d %d %d", &r, &g, &b);

    double c, m, y, k;
    rgbToCmyk(r, g, b, &c, &m, &y, &k);

    printf("CMYK values: C=%.2f, M=%.2f, Y=%.2f, K=%.2f\n", c, m, y, k);

    return 0;
}
