#include <Exenn.h>

class Sandbox : public Exenn::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
	
};

Exenn::Application* Exenn::CreateApplication()
{
	return new Sandbox();
}