#include <Windows.h>
#include <iostream>

void toogleicons() {
	HWND H = FindWindowEx(0, 0, (LPCSTR) "Progman", NULL);
	if (IsWindow(H)) {
		if (IsWindowVisible(H)) ShowWindow(H, SW_HIDE);
		else ShowWindow(H, SW_SHOW);
	}
}

int main () {

	toogleicons();
	return 0;
}
