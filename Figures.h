#ifndef GORSKELAB_FIGURES_H
#define GORSKELAB_FIGURES_H
using namespace std;

enum Style {
    stSolid = 1, stClarity = 2, stHidden = 3
};

typedef unsigned long Color;

class Location {
private:
    double x{}, y{};
public:
    double getX() const;

    double getY() const;

public:
    Location();

    Location(double x, double y);

    Location(Location &obj);
};

class Clip {
private:
    Location *min{};
public:
    Location *max{};
public:
    Clip();

    Clip(Clip &clip);

    Clip(double xn, double yn, double xk, double yk);
};

class Rhombus {
private:
    double hLength{}, wLength{};
public:
    void setHLength(double hLength);

    void setWLength(double wLength);

    void setCenter(const Location &center);

private:
    Location center{};
    bool visible{};
    Style style{};
    Color color{};
public:
    Rhombus();

    Rhombus(const Rhombus &rhombus);

    Rhombus(double hLength, double wLength, Location &center);

    Color getColor() const;

    void setColor(Color tint);

    bool isVisible() const;

    void setVisible(bool vision);

    Style getStyle() const;

    void setStyle(Style ltype);

    double getS();

    double getP();

    double getWLength();

    Location getCenter();
    double getHLength();
};


#endif //GORSKELAB_FIGURES_H
