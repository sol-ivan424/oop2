#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>


using namespace std;

class Cycloid {
private:
    double R;
    double theta;

public:
    // конструктор
    Cycloid(double R, double theta) {
        this->R = R;
        this->theta = theta;
    }

    // получение координаты x и y циклоиды
    pair<double, double> getCoordinates(double theta) const {
        double x = R * (theta - sin(theta));
        double y = R * (1 - cos(theta));
        return make_pair(x, y);
    }

    // получаем радиус кривизны
    double getRadiusOfCurvature(double theta) const {
        return R * (1 + cos(theta));
    }

    // получаем длину циклоиды
    double getLength(double theta, double R) const { return R * theta; }


    // получите полную площадь циклоиды
    double getFullArea() const {
        return R * R * M_PI;
    }

    // получаем площадь поверхности вращения
    double getSurfaceAreaOfRotation(double L) const {
        return 2 * M_PI * R * L;
    }

    // получаем объем тела вращения
    double getVolumeOfBodyOfRotation(double L) const {
        return (1.0 / 3.0) * M_PI * R * R * L;
    }
};
