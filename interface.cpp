#include "interface.h"
#include <iostream>

void drawFigure(Rhombus &rhombus) {
    cout << "Rhombus " << endl;
    cout << "vertical diagonal: " << rhombus.getHLength() << endl;
    cout << "horizontal diagonal: " << rhombus.getWLength() << endl;
    cout << "center x: " << rhombus.getCenter().getX() << " y: " << rhombus.getCenter().getY() << endl;
    cout << "P: " << rhombus.getP() << endl;
    cout << "S: " << rhombus.getS() << endl;
}

void drawCommand() {
    cout<<endl<<"command list"<<endl;
    cout << "1: draw" << endl;
    cout << "2: set vertical diagonal" << endl;
    cout << "3: set Horizontal diagonal" << endl;
    cout << "4: set color" << endl;
    cout << "5: set style" << endl;
    cout << "6: set x,y";
}


void setStyle(Rhombus &rhombus) {
    cout << "Input style 1,2 or 3";
    int style;
    cin >> style;
    bool error;
    do {
        error = false;
        switch (style) {
            case 1:
                rhombus.setStyle(stSolid);
                break;
            case 2:
                rhombus.setStyle(stClarity);
                break;
            case 3:
                rhombus.setStyle(stHidden);
                break;
            default:
                cout << "undefined style";
                error = true;
        }
    } while (error);
}

void ModifyFigure(Rhombus &rhombus) {
    int command = 1;
    while (command != 0) {
        switch (command) {
            case 1:
                drawFigure(rhombus);
                break;
            case 2:
                cout << "input vertical diagonal: ";
                double vdiagonal;
                cin >> vdiagonal;
                rhombus.setHLength(vdiagonal);
                break;
            case 3:
                cout << "input horizontal diagonal: ";
                double hdiagonal;
                cin >> hdiagonal;
                rhombus.setWLength(hdiagonal);
                break;
            case 4:
                cout << "Input color: ";
                int color;
                cin >> color;
                rhombus.setColor(color);
                break;
            case 5:
                setStyle(rhombus);
                break;
            case 6:
                double x, y;
                cout << "Enter x and y separated by a space: ";
                cin >> x >> y;
                {
                    auto *center = new Location(x, y);
                    rhombus.setCenter(*center);
                }
                break;
            default:
                cout << "undefined command";
        }
        drawCommand();
        cout <<endl<< "input command: ";
        cin >> command;
    }
}

