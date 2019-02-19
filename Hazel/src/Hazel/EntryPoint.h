#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);

	auto app = CreateApplication();
	app->Run();
	delete app;
}

#endif