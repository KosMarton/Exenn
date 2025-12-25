#include "xnpch.h"
#include "Application.h"

#include "Exenn/Events/ApplicationEvent.h"
#include "Exenn/Log.h"

namespace Exenn {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			XN_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			XN_TRACE(e);
		}

		while (true);
	}

}