#include <point2D.h>


Point2D::Point2D(){
    m_x = 0;
    m_y = 0;
}

Point2D::Point2D(int x, int y){
    m_x = x;
    m_y = y;
}

std::ostream& operator<<(std::ostream &out, const Point2D& point){
   out << '(' << point.m_x << ", " << point.m_y << ')';
   return out;
}

void Point2D::setPoint(int x, int y){
        m_x = x;
        m_y = y;
}
