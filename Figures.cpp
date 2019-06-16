#include <cmath>
#include "Figures.h"

Location::Location(double x, double y) : x(x), y(y) {}

Location::Location(Location &location) {
    this->x = location.x;
    this->y = location.y;
}

Location::Location() : x(0), y(0) {}

double Location::getX() const {
    return x;
}

double Location::getY() const {
    return y;
}

Clip::Clip() : min(new Location()), max(new Location()) {}

Clip::Clip(Clip &clip) {
    this->min = new Location(*clip.min);
    this->max = new Location(*clip.max);
}

Clip::Clip(double xn, double yn, double xk, double yk) {}

Rhombus::Rhombus() {
    this->center = *new Location();
    this->setColor(200);
    this->setStyle(Style::stSolid);
    this->setVisible(true);
    this->hLength = 20;
    this->wLength = 10;
}

Rhombus::Rhombus(const Rhombus &rhombus) {
    this->center = rhombus.center;
    this->setColor(rhombus.getColor());
    this->setStyle(rhombus.getStyle());
    this->setVisible(rhombus.isVisible());
}

Rhombus::Rhombus(double hLength, double wLength, Location &center) {
    this->hLength = hLength;
    this->wLength = wLength;
    this->center = center;
}

Color Rhombus::getColor() const {
    return color;
}

void Rhombus::setColor(Color tint) {
    this->color = tint;
}

bool Rhombus::isVisible() const {
    return visible;
}

void Rhombus::setVisible(bool vision) {
    this->visible = vision;
}

Style Rhombus::getStyle() const {
    return style;
}

void Rhombus::setStyle(Style ltype) {
    this->style = ltype;
}


double Rhombus::getS() {
    return (wLength * hLength) / 2.0;
}

double Rhombus::getP() {
    double gipotenuza = sqrt(pow(wLength / 2.0, 2) + pow(hLength / 2.0, 2));
    return gipotenuza * 4;
}

double Rhombus::getWLength() {
    return this->wLength;
}

double Rhombus::getHLength() {
    return this->hLength;
}

Location Rhombus::getCenter() {
    return center;
}

void Rhombus::setHLength(double hLength) {
    Rhombus::hLength = hLength;
}

void Rhombus::setWLength(double wLength) {
    Rhombus::wLength = wLength;
}

void Rhombus::setCenter(const Location &center) {
    Rhombus::center = center;
}




