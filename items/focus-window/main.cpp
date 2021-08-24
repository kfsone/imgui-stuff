#include "wrapper.h"

ImGuiWrapperReturnType
gui_main()
{
	constexpr ImGuiWindowFlags flags = ImGuiWindowFlags_NoSavedSettings;

	// Goal: Open 3 windows and avoid them overlapping, but if they must,
	// ensure that the first window is the one infront.
	// 
	// Could be done by making the second two windows NoFocusOnAppearing,
	// but that's not always either desirable or easy to pull off in a
	// particularly complex environment (think: scripted).
	//
	dear::Begin("Preferred Foreground Window", nullptr, flags) && []{
		ImGui::Text("This should be in front");
	};

	dear::Begin("Second Window") && []{
		ImGui::Text("Preferably not overlapping", nullptr, flags);
	};

	dear::Begin("Third Window") && []{
		ImGui::Text("Preferably not overlapping", nullptr, flags);
	};

	return {};
}

