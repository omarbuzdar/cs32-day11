#ifndef POLY_H
#define POLY_H
#include <vector>
#include "vec2.h"
#include "color.h"
#include "shape.h"

/* simple data representation of an implicit ellipse */
class Polygon : public shape {
  public:
	void accept(class Visitor &v) override;

	Polygon(vec2 v1, double d, color C) : shape{C,d} {
		theVerts.push_back(v1);
	}

	bool eval(double x, double y) override;
	void addVert(vec2 inV) { theVerts.push_back(inV); }

	double getMinX();

	// void translate(vec2 t) override
	// {
	// 	for(int i =0; i < theVerts.size(); i++)
	// 	{
	// 		theVerts[i] += t;
	// 	}
	// }
  private:
	std::vector<vec2> theVerts;

};

#endif