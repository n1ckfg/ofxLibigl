#include "ofMain.h"
#include "ofAppNoWindow.h"
#include "ofApp.h"


int main()
{
    auto window = std::make_shared<ofAppNoWindow>();
    ofRunApp(window, std::make_shared<ofApp>());
    ofRunMainLoop();
}
