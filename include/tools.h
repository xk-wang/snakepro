#ifndef TOOLS_H
#define TOOLS_H

#include <windows.h>

void ShowConsoleCursor(bool showFlag);
void SetWindowSize(int cols, int lines);
void SetCursorPosition(const int x, const int y);
void SetColor(int colorID);
void SetBackColor();
void cls( HANDLE hConsole);
#endif // TOOLS_H
