#include <math.h>
#include <stdio.h>
using namespace std;
struct A {
    int x, y, z;
    double ans;
};
A aa[110];
int x = -1, y, z, i, now = 0;
double ans;
bool input() {
    printf("Enter the X, Y, Z value (0 0 0 to exit): ");
    scanf("%d %d %d", &x, &y, &z);
    aa[now].x = x, aa[now].y = y, aa[now].z = z;
    if (x == 0 && y == 0 && z == 0) return false;
    return true;
}
void output() {
    ans = sqrt(x * x + y * y + z * z);
    aa[now++].ans = ans;
    printf("Lenght of vector (%d %d %d) is %.2lf\n", x, y, z, ans);
}
int main() {
    while (input()) {
        output();
    }
    printf("--Summary--\n");
    for (i = 0; i < now; i++)
        printf("%d) Lenght of vector (%d %d %d) is %.2lf\n", i + 1, aa[i].x, aa[i].y, aa[i].z, aa[i].ans);
    printf("End of program. Goodbye.\n");
    return 0;
}
