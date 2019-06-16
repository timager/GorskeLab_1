#include <iostream>
#include "Figures.h"
#include "interface.h"

using namespace std;
int main() {
    auto center = new Location();
    auto rhombus = new Rhombus(20.0, 20.0, *center);
    ModifyFigure(*rhombus);
}