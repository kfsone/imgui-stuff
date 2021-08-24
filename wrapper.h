#include "imgui.h"
#include "imguiwrap.dear.h"
#include "imguiwrap.helpers.h"

extern ImGuiWrapperReturnType gui_main();

#if defined(WIN32)
int WinMain()
#else
int main()
#endif
{
	imgui_main(ImGuiWrapConfig{}, gui_main);
}
