#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    capture = false;
    bFill	= true;
    gui.setup();
    gui.add(circle.setup("circle", 30, 30, 300));
    gui.add(ellipse.setup("ellipse", 30, 30, 300));
    gui.add(rect1.setup("rect1", 60, 60, 300));
    gui.add(rect2.setup("rect2", 20, 20, 300));
    gui.add(color1.setup("color1", 220, 0, 255));
    gui.add(color2.setup("color2", 220, 0, 255));
    gui.add(color3.setup("color3", 220, 0, 255));
    gui.add(color4.setup("color4", 220, 0, 255));
    gui.add(color5.setup("color5", 220, 0, 255));
    
    gui.add(line.setup("line", 600, 600, 255));
    gui.add(arc.setup("arc", 270, 270, 400));



}


//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(255, 255, 255);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //we don't want to capture every frame
    //so we only capture one frame when capture
    //is set to true
    if(capture){
        output.beginEPS("test.ps");
    }
    
    //do we want filled shapes or outlines?
    if(bFill)output.fill();
    else output.noFill();
    
    
    //--------------------
    // some lines - lets make a grid!
    //
    
    int numX = ofGetWidth() / 10;
    int numY = ofGetHeight() / 10;
    
    output.setColor(0xEEEEEE);
    
    for(int y = 0; y < numY; y++){
        output.line(0, y * 10, ofGetWidth(), y * 10);
    }
    
    for(int x = 0; x < numX; x++){
        output.line(x * 10, 0, x * 10, ofGetHeight() );
    }
    
    
    //--------------------
    // basic shapes
    //
    
    
    
    //b - rectangle from the top left corner
    ofSetColor(color1, 255,255);
    ofDrawBitmapString("b & c) rect();\n", 220, 140);
    ofSetColor(color1, 255,255);
    output.disableCenterRect();
    output.rect(240, 50, rect1, rect1);
    
    //c - rectangle from the center
    ofSetColor(color1, 255,255);
    output.enableCenterRect();
    output.rect(270, 80, rect2, rect2);
    
    //d - circle
    ofSetColor(255, color2,255);
    ofDrawBitmapString("d) circle(); \n", 380, 140);
      ofSetColor(255, color2 ,255);
    output.circle(425, 80, circle);
    gui.draw();
   
    //e - ellipse
    ofSetColor(255, 255,color3);
    ofDrawBitmapString("e) ellipse(); \n", 520, 140);
    
   ofSetColor(255, 255,color3);
    output.ellipse(570, 80, 40, ellipse);
    gui.draw();
    
    
    
    //h - an arc
    ofSetColor(color4, 255,color4);
    ofDrawBitmapString("h) arc(); \n", 390, 300);

     ofSetColor(color4, 255,color4);
    output.arc(400, arc, 60, 0, -70);
    
    
    //i - just a line
    ofSetColor(255, color5,color5);
    ofDrawBitmapString("i) line(); \n", 530, 300);
    
    ofSetColor(255, color5,color5);
    output.line(540, 220, line, 270);
    
    
    
    
   
    
    ofFill();
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofSetHexColor(0x000000);
    ofDrawRectangle(60, 630, 200,60);
    
    //some text to explain whats what
    ofSetHexColor(0xDDDDDD);
    ofDrawBitmapString("spacebar to capture\n'f' key toggles fill\nmouse to doodle", 75, 650);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == ' '){
        capture = true;
    }else if(key =='f'){
        bFill = !bFill;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    //we add a new point to our line
    pts.push_back(ofPoint());
    int last = pts.size()-1;
    
    pts[last].x = x;
    pts[last].y = y;
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    pts.clear();
    
    //lets store the first point of the line
    pts.push_back(ofPoint());
    pts[0].x = x;
    pts[0].y = y;
    
}


//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
