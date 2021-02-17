#ifndef SMALLEST_X_VISITOR
#define SMALLEST_X_VISITOR
#include "implicit2D.h"
#include "polygon.h"
#include "rect.h"
#include "visitor.h"

class smallestXVisitor : public Visitor {
    public:
        virtual void visit(Polygon *p) {
            cout << "smallest X value of the polygon: " << p->getMinX() << endl;
        }

        virtual void visit(Implicit2D *e) {
            cout << "smallest X value of the ellipse: " << e->getMinX() << endl;
        }

        virtual void visit(Rect *r) {
            cout << "smallest X value of the rectangle: " << r->getMinX() << endl;
        }     
    
};

#endif