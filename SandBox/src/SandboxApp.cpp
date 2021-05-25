#include <Artest.h>

class SandBox : public Artest::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}

};

Artest::Application* Artest::createApplication()
{
	return new SandBox;
}