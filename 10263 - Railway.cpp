//**************************************************************
//					Project #25: Railway
//                        UVa# 10263
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 11/29/2016
//*****************************************************************
#include <iostream>
using namespace std;

const double  EPS = 1e-9;


struct Point{
	double x, y;
	Point()
	{
		x = 0;
		y = 0;
	}

	Point(double _x, double _y)
	{
		x = _x;
		y = _y;
	}
};

struct Line{
	double a, b, c;
};

void Points_To_Line(Point p, Point q, Line & l)
{
	double dy = p.y - q.y;
	double dx = p.x - q.x;
	

	if (abs(dx) > EPS)
	{
		l.a = 
		l.b = 
		l.c = p.y - ((dy / dx) * p.x);
	}
	else
	{
		l.a = 1.0;
		l.b = 0.0;
		l.c = -1 * p.x;
	}
}

struct vec{
	double x, y;
	vec(double _x, double _y)
	{ 
		x = _x; 
		y = _y; 
	}
	vec(Point from, Point to)
	{
		x = to.x - from.x;
		y = to.y - from.y;
	}
};

double dist(Point p, Point q)
{
	return hypot(p.x - q.x, p.y - q.y);
}

double dot(vec a, vec b)
{
	return a.x*b.x + a.y*b.y;
}

vec scale(vec v, double s)
{
	return vec(v.x *s, v.y*s);
}

Point translate(Point p, vec v)
{
	return (Point(p.x + v.x, p.y + v.y));
}

//What is this doing?
double Dist_To_Line(Point p, Point a, Point b, Point&c)
{
	vec ap(a, p), ab(a, b);
	double u = dot(ap, ab) / (ab.x*ab.x + ab.y* ab.y);
	c = translate(a, scale(ab, u));
	return dist(p, c);
}

int main()
{
	
	return 0;
}

//I have written the entire program as turned in and have not copied 
//this code, or parts of this code from the internet or
//another student.                      Signature____________________
