#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
    
        void keyPressed(int key);
        void keyReleased(int key);
        float x;
        float speedX;
        float x1;
        float x2;
        float y;
        float speedY;
        float y1;
        float y2;
        ofColor color;
        bool boost = false;
        bool boost1 = false;
        bool boost2 = false;
        bool boost3 = false;
        void windowResized(int w, int h);
    
        ofApp();
    
        private:
		
    
		
};
