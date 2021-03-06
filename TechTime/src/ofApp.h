#pragma once
#include "ofMain.h"
#include "GameManager.h"

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
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        GameManager gameMan;

        ofVec2f mousePos;
        bool pressed;//true if mouse button has been pressed down
        bool clicked;//true if mouse button has been pushed down then released
        bool dragging;//true if mouse button is pressed and is being moved
        int mouseclicked;
};
