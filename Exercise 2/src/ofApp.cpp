#include "ofApp.h"
ofApp::ofApp(){
    
}
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600,600);
    ofBackground(0);
    ofSetCircleResolution(50);
    x = 300;
    x1 = 200;
    x2 = 400;
    y = 300;
    y1 = 300;
    y2  = 300;
    speedY = 4;
    speedX = 4;
    color.set(255,0,0);
}

//--------------------------------------------------------------
void ofApp::update(){
   
    
    if(boost2){
        y -= speedY;
        y1-= speedY;
        y2-= speedY;
        
        
        if(y < 0){
            y = ofRandom(0,600);
            color.set(ofRandom(255),ofRandom(255),ofRandom(255));
        }
        
        if(y1 < 0){
            y1 = ofRandom(0,600);
        }
        if(y2 < 0){
            y2 = ofRandom(0,600);
        }
        
        
    }
    
    
    if(boost3){
        y += speedY;
        y1+= speedY;
        y2+= speedY;
        
        
        if(y > 600){
            y = ofRandom(0,600);
            color.set(ofRandom(255),ofRandom(255),ofRandom(255));
        }
        
        if(y1 > 600){
            y1 = ofRandom(0,600);
        }
        if(y2 > 600){
            y2 = ofRandom(0,600);
        }
        
        
    }
    
    
    
    
    
    
    
    
    if(boost1){
        x -= speedX;
        x1-= speedX;
        x2-= speedX;
        
        
        if(x < 0){
            x = ofRandom(0,600);
            color.set(ofRandom(255),ofRandom(255),ofRandom(255));
        }
        
        if(x1 < 0){
            x1 = ofRandom(0,600);
        }
        if(x2 < 0){
            x2 = ofRandom(0,600);
        }
    
    
    }
   
    
    
    
    if(boost){
    x+=speedX;
    x1+=speedX;
    x2+=speedX;
        
        
    if(x > 600){
        x = ofRandom(0,600);
        color.set(ofRandom(255),ofRandom(255),ofRandom(255));
    }
    
    if(x1 > 600){
        x1 = ofRandom(0,600);
    }
    if(x2 > 600){
        x2 = ofRandom(0,600);
    }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
 
   
    
    
    
    ofSetColor(color);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofDrawRectangle(x,y,20,20);
    ofDrawRectangle(x1,y1,20,20);
    ofDrawRectangle(x2,y2,20,20);

    
    
    
    

}


void ofApp::windowResized(int w, int h){

}

void ofApp::keyPressed(int key){
    if(key ==  'd' ) {
        boost = true;
    }
    if(key ==  'a' ) {
        boost1 = true;
    }
    if(key ==  'w' ) {
        boost2 = true;
    }
    if(key ==  's' ) {
        boost3 = true;
    }

}
void ofApp::keyReleased(int key){
    if(key ==  'd' ){
        boost = false;
    }
    if(key ==  'a' ){
        boost1 = false;
    }
    if(key ==  'w' ){
        boost2 = false;
    }

    if(key ==  's' ){
        boost3 = false;
    }
}
