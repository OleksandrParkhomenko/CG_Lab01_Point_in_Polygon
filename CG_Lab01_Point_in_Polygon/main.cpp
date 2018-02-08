#include <iostream>
#include "Point_in_Polygon.h"

int main() {
	int n;
	Point *p;
	Point a;
	std::cout << "Enter number of vertices: ";
	std::cin >> n; std::cin.ignore();
	p = new Point[n];
	std::cout << "Enter the coordinates of vertices (x,y): \n";
	for (int i = 0; i < n; i++) {
		std::cin >> p[i].x >> p[i].y; std::cin.ignore();
	}
	std::cout << "Enter the point to check (x,y): \n";
	std::cin >> a.x >> a.y; std::cin.ignore();
	if (Point_in_Polygon(a,n,p)) {
		std::cout << "The point is inside of polygon.\n";
	}
	else {
		std::cout << "The point is outside of polygon.\n";
	}


	system("pause");
	return 0;
}