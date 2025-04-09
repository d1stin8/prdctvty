#include <raylib.h>

#define RAYGUI_IMPLEMENTATION
#include "raygui/raygui.h"

int main(void) {
  SetConfigFlags(FLAG_WINDOW_RESIZABLE);
  SetConfigFlags(FLAG_BORDERLESS_WINDOWED_MODE);
  InitWindow(960, 560, "Productivity App");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    Rectangle tasks = {10, 10, GetScreenWidth() / 2 - 10,
                       GetScreenHeight() - 20};

    Rectangle calendar = {GetScreenWidth() / 2 + 10, 10,
                          GetScreenWidth() / 2 - 20, GetScreenHeight() - 20};

    BeginDrawing();
    ClearBackground(BLACK);
    GuiWindowBox(tasks, "Tasks");
    GuiWindowBox(calendar, "Calendar");
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
