#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "GoogleCloudVision.h"

// https://cloud.google.com/vision/docs/concepts

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
	
protected:

private:
	enum {
		WIDTH = 1280,
		HEIGHT = 720,
        FBO_SIZE = 1280
	};
	
	bool bDebugVisible = false;
	std::shared_ptr<ofxGuiGroup> mGui;

	ofParameterGroup mUniforms;
	ofParameter<float> uElapsedTime;
	
	std::shared_ptr<ofFbo> mFbo;


	ofTexture tex;

	google::CloudVisionRef mCloudVision;
};