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
    // �����������
    Cycloid(double R, double theta) {
        this->R = R;
        this->theta = theta;
    }

    // ��������� ���������� x � y ��������
    pair<double, double> getCoordinates(double theta) {
        double x = R * (theta - sin(theta));
        double y = R * (1 - cos(theta));
        return make_pair(x, y);
    }

    // �������� ������ ��������
    double getRadiusOfCurvature(double theta) {
        return R * (1 + cos(theta));
    }

    // �������� ����� ��������
    double getLength(double theta, double R) { return R * theta; }


    // �������� ������ ������� ��������
    double getFullArea() {
        return R * R * M_PI;
    }

    // �������� ������� ����������� ��������
    double getSurfaceAreaOfRotation(double L) {
        return 2 * M_PI * R * L;
    }

    // �������� ����� ���� ��������
    double getVolumeOfBodyOfRotation(double L) {
        return (1.0 / 3.0) * M_PI * R * R * L;
    }
};
