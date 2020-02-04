#pragma once
#include "ofxGui.h"
#include "ofxVectorGraphics.h"
#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofxFloatSlider circle;
    
    ofxFloatSlider ellipse;
    
    ofxFloatSlider rect1;
    ofxFloatSlider rect2;
    ofxFloatSlider color1;
    ofxFloatSlider color2;
    ofxFloatSlider color3;
    ofxFloatSlider color4;
    ofxFloatSlider color5;
    
    ofxFloatSlider line;
    ofxFloatSlider arc;
    ofxPanel gui;
    
    ofxVectorGraphics output;
    bool capture;
    bool bFill;
    
    vector <ofPoint> pts;
    
    
};
