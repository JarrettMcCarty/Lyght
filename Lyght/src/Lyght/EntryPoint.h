#pragma once

#ifdef LT_PLATFORM_WINDOWS

extern Lyght::Application* Lyght::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Lyght::CreateApplication();
	app->Run();
	delete app;
}

#endif