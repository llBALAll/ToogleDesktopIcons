#include <Windows.h>
#include <iostream>

void ChangeVisibility() {
	//HWND H = FindWindowEx(0, 0, L"Progman", NULL);
	HWND H = FindWindowEx(0, 0, (LPCSTR) "Progman", NULL);
	if (IsWindow(H)) {
		if (IsWindowVisible(H)) ShowWindow(H, SW_HIDE);
		else ShowWindow(H, SW_SHOW);
	}
}

int main () {

	ChangeVisibility();
	return 0;
}