//
//  mover.h
//  NOC_1_7_motion101
//
//  Created by Firm Read on 2/22/13.
//
//

#include "ofMain.h"

class mover{
public:
    mover();
    void update();
    void display();
    void checkEdges();
    
    ofPoint location;
    ofPoint velocity;
    ofPoint acceleration;
    float topspeed;
    
};
