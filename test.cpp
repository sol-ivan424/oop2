#include "pch.h"
#include <gtest/gtest.h>
#include "../lab2/Header.h"

const double pi = 3.14159265358979323846;
const double epsilon = 0.0001;

TEST(CycloidTest, TestCoordinates) {
    double R = 2.0;
    double theta = pi / 3;
    Cycloid c(R, theta);

    auto coordinates = c.getCoordinates(theta);
    double expectedX = R * (theta - sin(theta));
    double expectedY = R * (1 - cos(theta));
    EXPECT_NEAR(coordinates.first, expectedX, epsilon);
    EXPECT_NEAR(coordinates.second, expectedY, epsilon);
}

TEST(CycloidTest, TestRadiusOfCurvature) {
    double R = 2.0;
    double theta = pi / 3;
    Cycloid c(R, theta);

    double radius = c.getRadiusOfCurvature(theta);
    double expectedRadius = R * (1 + cos(theta));
    EXPECT_NEAR(radius, expectedRadius, epsilon);
}

TEST(CycloidTest, TestFullArea) {
    double R = 2.0;
    double theta = pi / 3;
    Cycloid c(R, theta);

    double area = c.getFullArea();
    double expectedArea = R * R * pi;
    EXPECT_NEAR(area, expectedArea, epsilon);
}

TEST(CycloidTest, TestSurfaceAreaOfRotation) {
    double R = 2.0;
    double L = 3.0;
    Cycloid c(R, 0);

    double As = c.getSurfaceAreaOfRotation(L);
    double expectedAs = 2 * pi * R * L;
    EXPECT_NEAR(As, expectedAs, epsilon);
}

TEST(CycloidTest, TestVolumeOfBodyOfRotation) {
    double R = 2.0;
    double L = 3.0;
    Cycloid c(R, 0);

    double V = c.getVolumeOfBodyOfRotation(L);
    double expectedV = (1.0 / 3.0) * pi * R * R * L;
    EXPECT_NEAR(V, expectedV, epsilon);
}
