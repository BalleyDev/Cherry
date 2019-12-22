#include "Core/Launcher.h"
#include "Event/SoftwareEvent.h"
#include "../Windows/WindowsWindow.h"
#include "chpch.h"
#include <typeinfo>
#include "../Cherry/Core/Window.h"

int main()
{
	launch();
	
	Cherry::WindowsWindow(Cherry::WindowProps("Test", 1000,400));
	std::cin.get();
	return 0;
}