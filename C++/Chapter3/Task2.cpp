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
#include <ctime>
#include <utility>

/**
 * Represents a planar point.
 *
 * The point coordinates can be assigned with random or explicitly defined values.
 * Those values subsequently express x and y axis of a mathematical coordinate plane.
 *
 * @param x First coordinate of the point.
 * @param y Second coordinate of the point.
 */
class Point {
private:
    int x;
    int y;
    std::string name;
    static bool first_object;
public:
    /**
     * @param name Name of the point.
     * @param x First coordinate value of the point.
     * @param y Second coordinate value of the point.
     */
    Point(std::string name, int x, int y) {
        if (first_object){
            srand(time(nullptr));
            first_object = false;
        }
        this->name = std::move(name);
        this->x = x;
        this->y = y;
    }

    /**
     * Name of the point is pre-defined as "P".
     *
     * @param x First coordinate value of the point.
     * @param y Second coordinate value of the point.
     */
    Point(int x, int y) {
        if (first_object){
            srand(time(nullptr));
            first_object = false;
        }
        this->name = "P";
        this->x = x;
        this->y = y;
    }

    /**
     * Shows coordinates of the point.
     * This method is inline because my professor told me to do so.
     */
    inline void show_coordinates() const {
        std::cout << name << " = (" << x << ',' << y << ")\n";
    }

    /**
     * Modifies the existing attributes of the point.
     *
     * It changes the x and y value of the point to the random integer between -100 and 100
     * since I didn't know what "random" means to my beloved professor ❤.
     */
    void initialise_with_random_coords() {
        x = (rand() % 200 -100);
        y = (rand() % 200 -100);
    }

    /**
     * Shows the symmetrical point of the point object when given a point of symmetry.
     *
     * The calculations are based on the x and y attributes of the given point object that is a point of symmetry.
     *
     * @param point Object of the point of symmetry.
     * @return Object of the symmetrical point.
     */
    [[nodiscard]] Point create_symmetrical(const Point& point) const {
        int symmetrical_x = 2 * point.x - x;
        int symmetrical_y = 2 * point.y - y;
        return Point(name + "'", symmetrical_x, symmetrical_y);
    }

    /**
     * Adds points to each other.
     *
     * The calculations are based on the x and y attributes of a given point object.
     * Function creates new coordinates and then returns it as an object.
     *
     * @param point Object of the point.
     * @return Object of the final point.
     */
    [[nodiscard]] Point sum(const Point& point) const {
        int sum_x = this->x + point.x;
        int sum_y = this->y + point.y;
        return Point(sum_x, sum_y);
    }
};
bool Point::first_object = true;
int main() {
    Point A("A", 5, 6);
    Point point_of_symmetry(1, 1);

    A.show_coordinates();
    Point symmetrical = A.create_symmetrical(point_of_symmetry);
    symmetrical.show_coordinates();
    Point final_point = A.sum(A);
    final_point.show_coordinates();
    A.initialise_with_random_coords();
    A.show_coordinates();
}
