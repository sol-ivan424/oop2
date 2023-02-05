#include "Header.h"

int main() {
    double R, theta, L;

    // �������� ������� �� ������������
    cout << "Enter the radius of the generating circle: ";
    cin >> R;

    // ��������� ���� �� ������������
    cout << "Enter the angle of rotation of the generating circle: ";
    cin >> theta;

    // �������� ������� ��������
    Cycloid c(R, theta);

    // ��������� ���������� x � y ��������
    pair<double, double> coordinates = c.getCoordinates(theta);
    cout << "x = " << coordinates.first << ", y = " << coordinates.second << endl;

    // ��������� ����� ��������
    L = c.getLength(theta, R);
    cout << "Length of the cycloid: " << L << endl;

    // �������� ������ ��������
    cout << "Radius of curvature: " << c.getRadiusOfCurvature(theta) << endl;

    // ������ ������� ��������
    cout << "Full area: " << c.getFullArea() << endl;

    // ������� ����������� ��������
    cout << "Surface area of rotation: " << c.getSurfaceAreaOfRotation(L) << endl;

    // ����� ��������
    cout << "Volume of body of rotation: " << c.getVolumeOfBodyOfRotation(L) << endl;

    return 0;
}