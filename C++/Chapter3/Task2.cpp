/*
 *     Copyright (C) 2021 wzium (jjay31)
 *
 *     This program is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#include <iostream>
#include <windows.h>
#include <ctime>

/**
 * Represents a planar point.
 *
 * The point coordinates can be assigned with random or explicitly defined values.
 * Those values subsequently express x and y axis of a mathematical coordinate plane.
 *
 * @param x first coordinate of the point.
 * @param y second coordinate of the point.
 */
class Point {
private:
    int x;
    int y;
public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    /**
     * Shows coordinates of the point.
     * This method is inline because my professor told me to do so.
     */
    inline void show_coordinates() const {
        std::cout << "Punkt ·" << x << "," << y << std::endl;
    }

    /**
     * Modifies the existing attributes of the point.
     *
     * It changes the x and y value of the point to the random integer between -100 to 100
     * since I didn't know what "random" means to my beloved professor ❤.
     */
    void initialise_with_random_coords() {
        srand(time(NULL));
        x = (rand() % 200 -100);
        y = (rand() % 200 -100);
    }

    /**
     * Shows the symmetrical point of the point object when given a point of symmetry.
     *
     * The calculations are based on the x and y attributes of the given point object that is a point of symmetry.
     * Finally, the method outputs its calculations via the standard output.
     *
     * @param point Object of the point of symmetry.
     */
    void show_symmetrical(Point point) const {
        int symmetrical_x = 2 * point.x - x;
        int symmetrical_y = 2 * point.y - y;
        std::cout
        << "Punkt symetryczny względem punktu "
        << point.x
        << ","
        << point.y
        << " to punkt "
        << symmetrical_x
        << ","
        << symmetrical_y
        << std::endl;
    }

    /**
     * Adds points to each other.
     *
     * The calculations are based on the x and y attributes of both given point objects.
     * Function creates new coordinates and then returns it as an object.
     *
     * @param point Object of the first point.
     * @param second_point Object of the second point
     * @return Object of the final point.
     */
    Point sum(Point point, Point second_point) { // Shouldn't it be static?
        int sum_x = point.x + second_point.x;
        int sum_y = point.y + second_point.y;
        return Point(sum_x, sum_y);
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Point A(5, 6);
    Point B(2, 3);
    Point point_of_symmetry(1, 1);

    A.show_coordinates();
    A.show_symmetrical(point_of_symmetry);
    Point final_point = A.sum(A, B);
    final_point.show_coordinates();
    A.initialise_with_random_coords();
    A.show_coordinates();
}
