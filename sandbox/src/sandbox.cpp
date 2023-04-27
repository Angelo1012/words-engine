#include <wordsengine.h>

class sandbox : public wordsengine::Application {
public:
	sandbox() {}
	~sandbox() {}
};

wordsengine::Application* wordsengine::CreatApplication() {
	return new sandbox();
}