#include "runge.h"

std::pair<std::vector<double>, std::vector<double>>
Runge::solve(
    std::function<double(double, double)> func,
        double y0,
        double x0,
        double h,
        std::size_t n
) {

    std::vector<double> y(n);
    std::vector<double> x(n);

    double k1 = 0., k2 = 0., k3 = 0., k4 = 0.;
    double half_h = h / 2.;
    double d_y = 0.;
    y[0] = y0;
    x[0] = x0;
    
    for (std::size_t i = 1; i < n; ++i)
    {
        k1 = func(x[i-1], y[i-1]);
        k2 = func(x[i-1] + half_h, y[i-1] + half_h * k1);
        k3 = func(x[i-1] + half_h, y[i-1] + half_h * k2);
        k4 = func(x[i-1] + h, y[i-1] + h * k3);
        y[i] = y[i-1] + h * (k1 + 2 * k2 + 2 * k3 + k4) / 6.;
        x[i] = x[i-1] + h;
    }

    return std::pair{x, y};
}