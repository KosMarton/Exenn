#pragma once

#ifdef XN_PLATFORM_WINDOWS

extern Exenn::Application* Exenn::CreateApplication();

int main(int argc, char** argv)
{
	Exenn::Log::Init();
	XN_CORE_WARN("Initialized Log!");
	int a = 5;
	XN_INFO("Hello! Var={0}", a);

	auto app = Exenn::CreateApplication();
	app->Run();
	delete app;
}

#endif