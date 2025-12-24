#pragma once

#ifdef XN_PLATFORM_WINDOWS

extern Exenn::Application* Exenn::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Exenn::CreateApplication();
	app->Run();
	delete app;
}

#endif