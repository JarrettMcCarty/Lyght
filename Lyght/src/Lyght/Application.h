#pragma once

#include "Core.h"

namespace Lyght
{
	class LYGHT_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	// to be defined in client
	Application* CreateApplication();

}

