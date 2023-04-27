#pragma once
#ifdef WE_PLATFORM_WINDOWS

extern wordsengine::Application* wordsengine::CreatApplication();

int main(int argc, char** argv) {
	auto app = wordsengine::CreatApplication();
	app->Run();
	delete app;
}

#endif