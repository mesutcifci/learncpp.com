#include <creature.h>

Creature::Creature(const std::string &name, const Point2D &location){
     m_name = name;
     m_location = location;
}

std::ostream& operator<<(std::ostream &out, const Creature &creature){
    out << creature.m_name << " is at " << creature.m_location;
    return out;
}

void Creature::moveTo(int x, int y){
    m_location.setPoint(x,y);
}
