#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

double jarak(Point p1, Point p2){
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

    int main(){
        Point p1 = {0, 0};
        Point p2 = {3, 4};

        double jarak_p1_p2 = jarak(p1,p2);

        cout << "Jarak antara (" << p1.x << ", " << p1.y << ") dan (" << p2.x << ", " << p2.y << ") adalah " << jarak_p1_p2 << endl;

        return 0;
}