
#ifndef WM_TEST_H
#define WM_TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xatom.h>

extern Display *display;
extern Window rootWindow;
extern int rootScreen;
extern int rootDepth;

void TestMap();
void TestGravity();

#endif