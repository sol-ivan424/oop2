#include "Header.h"

int main() {
    double R, theta, L;

    // получите радиуса от пользователя
    cout << "Enter the radius of the generating circle: ";
    cin >> R;

    // получение угла от пользователя
    cout << "Enter the angle of rotation of the generating circle: ";
    cin >> theta;

    // создание объекта циклоиды
    Cycloid c(R, theta);

    // получение координаты x и y циклоиды
    pair<double, double> coordinates = c.getCoordinates(theta);
    cout << "x = " << coordinates.first << ", y = " << coordinates.second << endl;

    // получение длины циклоиды
    L = c.getLength(theta, R);
    cout << "Length of the cycloid: " << L << endl;

    // получаем радиус кривизны
    cout << "Radius of curvature: " << c.getRadiusOfCurvature(theta) << endl;

    // полная площадь циклоиды
    cout << "Full area: " << c.getFullArea() << endl;

    // площадь поверхности вращения
    cout << "Surface area of rotation: " << c.getSurfaceAreaOfRotation(L) << endl;

    // объем вращения
    cout << "Volume of body of rotation: " << c.getVolumeOfBodyOfRotation(L) << endl;

    return 0;
}