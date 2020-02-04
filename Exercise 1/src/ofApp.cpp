#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float x = ofGetWidth() / 2;
    float y = ofGetWidth() / 2;
    
    float angle = ofMap(mouseX, 0, ofGetWidth(),-90,90);
    
    ofPushMatrix();// Remember the current matrix view
    ofTranslate(x,y);
    ofScale(2.0,2.0);
    ofRotateX(angle); // default rotation
    
    
    ofDrawEllipse(-10, -15,10,20);
    ofDrawEllipse(10,-15,10,20);
    
    ofDrawEllipse(0,10,20,10);
    ofDrawLine(0,-10,0,0);
    
    ofPopMatrix(); // Go back to old Matrix
    
    
    ofPushMatrix();
    ofTranslate(100,100);
    ofRotateY(angle);
    ofDrawRectangle(0,0,50,50);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
