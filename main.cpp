#include "imgui.h"
#include "imguiwrap.dear.h"
#include "imguiwrap.helpers.h"

ImGuiWrapperReturnType
gui_main()
{
	dear::Begin("Example", nullptr, ImGuiWindowFlags_AlwaysAutoResize) && [] {
		static char b1[255], b2[255], b3[255];
		ImGui::TextUnformatted("Regular input");
   		ImGui::InputTextMultiline("##t1", b1, 255, ImVec2(0,0), ImGuiInputTextFlags_None);

		ImGui::TextUnformatted("Hex -- return does not work");
   		ImGui::InputTextMultiline("##t2", b2, 255, ImVec2(0,0), ImGuiInputTextFlags_CharsHexadecimal);

		ImGui::TextUnformatted("Hex w/ CtrlEnter for Newline -- still no worky");
   		ImGui::InputTextMultiline("##t3", b3, 255, ImVec2(0,0), ImGuiInputTextFlags_CharsHexadecimal | ImGuiInputTextFlags_CtrlEnterForNewLine);
	};

	return {};
}

int main()
{
	imgui_main(ImGuiWrapConfig{}, gui_main);
}
