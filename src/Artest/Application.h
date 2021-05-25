#pragma once
#include "Core.h"

namespace Artest
{
	class ARTEST_API Application
	{
	public:
		Application();
		virtual ~Application();
		void run();
	};
	// TO be defined in client
	Application* createApplication();
}
