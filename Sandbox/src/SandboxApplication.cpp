#include <Lyght.h>

class Sandbox : public Lyght::Application
{
public:
	Sandbox()
	{}

	~Sandbox()
	{}
};

Lyght::Application* Lyght::CreateApplication()
{
	return new Sandbox();
}