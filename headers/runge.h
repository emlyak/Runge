#ifndef RUNGE_H
#define RUNGE_H

#include <vector>
#include <functional>

class Runge {

public:
    // Runge() = 0;

    // ~Runge() = default;

    static std::pair<std::vector<double>, std::vector<double>> solve(
        std::function<double(double, double)> func,
        double y0,
        double x0,
        double h = 0.1,
        std::size_t n = 100
    );

    static std::pair<std::vector<double>, std::vector<double>> solve(
        std::function<double(double, double, double)> func,
        double y0,
        double dy0,
        double x0,
        double h = 0.1,
        std::size_t n = 100
    );

};

#endif