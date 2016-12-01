//**************************************************************
//                  Project #25: Railway
//                        UVa# 10263
//                  Name: Christopher James
//               Advanced Programming Techniques
//                    Date: 11/29/2016
//*****************************************************************
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double  EPS = 1e-9;

//Point
struct Point{
	//A point has X-value and a Y-value
	double x, y;
	
	//Default constructor
	Point()
	{
		x = 0;
		y = 0;
	}
	//Parameterized constructor
	Point(double _x, double _y)
	{
		x = _x;
		y = _y;
	}
};

//A line has 3 coefficients
struct Line{
	double a, b, c;
};

//Convert two points to a line
void Points_To_Line(Point p, Point q, Line & l)
{
	//find the gradient of the line going through
	//these two points
	double dy = p.y - q.y;
	double dx = p.x - q.x;
	
	//if the gradient is not 0.
	if (abs(dx) > EPS)
	{	
		//Equation of a line is this for (ax + by + c)
		l.a = -(double) (p.y - q.y)/ (p.x - q.x);
		l.b = 1.0;
		l.c = p.y - ((dy / dx) * p.x);
	}
	else
	{
		//Equation of a line is this for (ax + by + c)
		l.a = 1.0;
		l.b = 0.0;
		l.c = -1 * p.x;
	}
}
//Vector
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

double Dist_To_LineSegment(Point p, Point a, Point b, Point&c)
{
	vec ap(a, p), ab(a, b);
	double u = dot(ap, ab) / (ab.x*ab.x + ab.y* ab.y);
	if (u < 0.0)
	{
	  c = Point(a.x,a.y);
	  return dist(p,a);
	}
	if (u > 1.0)
	{
	  c = Point(b.x,b.y);
	  return dist(p,b);
	}
	return Dist_To_Line(p,a,b, c);
}

int main()
{
	//Read in the values for point M
	float Xm, Ym;
	
	//While we can keep reading in
	while(cin >> Xm)
	 {
		//Read in Point-M's Y value;
		cin>> Ym;
		
		//Read in N init the read in values
		int n, Px, Py;
		cin >> n;
		
		//Create point M
		Point M(Xm,Ym);

		//Set minimum distance to a big number
		double mindist = 10000000000.0;
		double distance;

		//Init points
		Point A;
		Point B;
		Point C;
		Point S;
		
		//Read in the first point
		cin >> A.x >> A.y;

		//For every point we can get
		for (int i = 0; i < n; i++)
		{
		  //Read in the second point
		  cin >> B.x >> B.y;
		  //Calculate the distane from M to the line segment AB
		  distance = Dist_To_LineSegment(M,A,B,C);
		  
		  //If the distance is less than the minimal distance
		  if (distance < mindist)
		  {
		    //Then this is the new minimum distance
		    mindist = distance;
		    //And this is the new closest point
		    S = C;
		  }
		  //Set the second point to be the new first point
		  A = B;
		}
		//Output the solution to the screen.
		cout << fixed << setprecision(4) << S.x << endl << S.y << endl;
	}
	return 0;
}

//I have written the entire program as turned in and have not copied 
//this code, or parts of this code from the internet or
//another student.                      Signature____________________
