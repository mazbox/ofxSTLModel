#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0);
	model.read("torus.stl");
	ofSetColor(255,255,255);
	
}

//--------------------------------------------------------------
void testApp::update(){
}

//--------------------------------------------------------------
void testApp::draw(){
	ofPushMatrix();
		ofTranslate(ofGetWidth()/2,ofGetHeight()/2, 0);
		ofScale(10,10,10);
		ofRotate(ofGetFrameNum(), 1,1,0);
		if(wireframe){
			model.vboMesh.drawWireframe();
		}else{
			model.draw();
		}
	ofPopMatrix();
	ofDrawBitmapString(ofToString(ofGetFrameRate(), 4)+ " FPS", 10, ofGetHeight()-20);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
	wireframe = !wireframe;
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

