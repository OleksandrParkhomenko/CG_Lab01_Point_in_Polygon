#include "Point_in_Polygon.h"

Point::Point() {}

Point::Point(int _x, int _y) {
	x = _x;
	y = _y;
}

bool Point::classify(Point a, Point b) {
	double s = (b.x - a.x)*(y - a.y) - (x - a.x)*(b.y - a.y);
	if (s > 0.0) return true;
	return false;
}

Point::~Point() {}

bool Point_in_Polygon(Point a, int num, Point* p) {
	bool side = a.classify(p[0], p[1]);
	for (int i = 1; i < num - 1; i++) {
		if (a.classify(p[i], p[i + 1]) != side) return false;
	}
	return true;
}