#ifndef RUNGE_H
#define RUNGE_H

#include <vector>
#include <functional>
#include "dllexport.h"

DLL_RUNGE_EXPORT
class Runge {

public:

    Runge() = delete;

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