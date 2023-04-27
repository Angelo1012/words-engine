#pragma once
#include "core.h"
namespace wordsengine {
	class WE_API Application
	{
	public:
		Application();

		virtual ~Application();

		void Run();
	};

	Application* CreatApplication();//在客户端中定义
}
