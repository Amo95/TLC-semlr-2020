//pragma once is a header guard that prevent the preprocessor from running the code multiple times in a single translation unit (cpp file) but not in multiple files
#pragma once

void InitLog();
void Log(const char* message);

struct Player{};
