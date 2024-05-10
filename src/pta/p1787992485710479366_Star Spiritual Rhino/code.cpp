#include <iostream>
#include <cmath>

#define x first
#define y second

using namespace std;

typedef pair<double, double> PDD;

int T;

PDD rotate(PDD a, double angle)
{
    return {a.x * cos(angle) + a.y * sin(angle), -a.x * sin(angle) + a.y * cos(angle)};
}

double dist(PDD a, PDD b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main()
{
    scanf("%d", &T);
    while(T -- )
    {
        double R, r, t;
        scanf("%lf%lf%lf", &R, &r, &t);

        double angle1 = sqrt(1 / pow(R, 3)) * t, angle2 = sqrt(1 / pow(r, 3)) * t;

        auto a = rotate({R, 0}, -angle1), b = rotate({r, 0}, -angle2);

        printf("%.1lf\n", dist(a, b));
    }

    return 0;
}