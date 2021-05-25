#pragma once
#ifdef AT_PLATFORM_WINDOWS
extern Artest::Application* Artest::createApplication();

int main(int argc, char** argv)
{
	
	auto app = Artest::createApplication();
	app->run();
	delete app;
}
#else
#error ARTEST only support Windows only
#endif // AT_PLATFORM_WINDOWS
