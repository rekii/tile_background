#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gridSize = 100;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    
    int width = ofGetWindowWidth();
    int height = ofGetWindowHeight();
    int offset = 20;
    
    int numRow = width / gridSize;
    int numColumn = height / gridSize;
    
    for (int i = 0; i < numRow; i++)
    {
        ofSetColor(255, 255, 255);
        ofLine(0, offset + i * width / numRow, width, offset + i * height / numRow);
    }
    
    for (int i = 0; i < numColumn; i++)
    {
        ofSetColor(255, 255, 255);
        ofLine(offset + i * width / numColumn, 0, offset + i * height / numColumn, height);
        ofPoint();
    }
    
//    Constructing grids by drawing dots:
//    for (int j = 0; j < numRow; j++)
//    {
//        for (int i = 0; i < numColumn; i++)
//        {
//            ofCircle(offset + i * width / numColumn, offset + j * height / numRow, 5);
//        }
//    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == OF_KEY_RETURN)
    {
        ofSaveScreen("scrnshot/bg.png");
    }
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
