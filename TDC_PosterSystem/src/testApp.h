#pragma once

#include "ofMain.h"
#include "WeatherColors.h"
#include "TypeParticleSystem.h"
#include "ofxUI.h"

#include "ofxSpacebrew.h"

class testApp : public ofBaseApp{

	public:
		void setup();
        void setupSpacebrew();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        void onGui( ofxUIEventArgs & e );
    
        // particle system
        TypeParticleSystem particles;
    
        int drawMode;
    
        // image saving logic
        ofFbo toSave;
        ofFbo toSavePoster;
        ofPixels pix;
    
        // poster bg
        ofMesh posterMesh;
    
        // type
        ofxSVG type;
    
        // tweakin'
        vector<ofxUISuperCanvas *> guis;
        ofxUITabBar * gui;
    
        // interaction
        Spacebrew::Connection spacebrew;
        void onMessage( Spacebrew::Message & m );
};
