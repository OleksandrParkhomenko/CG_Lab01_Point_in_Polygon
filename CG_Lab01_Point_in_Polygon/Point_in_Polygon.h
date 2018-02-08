#pragma once
class Point
{
public:
	int x, y;
	Point();
	Point(int, int);
	//classify if the point is on the left or right of the line which goes through 2 points
	// "true" if point is on the left
	bool classify(Point, Point); 
	~Point();
	
};

bool Point_in_Polygon(Point, int, Point*);