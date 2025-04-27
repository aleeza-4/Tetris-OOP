//#pragma once
//#include <vector>
//#include <raylib.h>
//extern const Color darkGrey; // extern = declare var in one file, use in another, const to not change val
//
//extern const Color darkGrey = { 26, 31, 40, 255 };
//extern const Color green = { 47, 230, 23, 255 };
//extern const Color red = { 232, 18, 18, 255 };
//extern const Color orange = { 226, 116, 17, 255 };
//extern const Color yellow = { 237, 234, 4, 255 };
//extern const Color purple = { 166, 0, 247, 255 };
//extern const Color cyan = { 21, 204, 209, 255 };
//extern const Color blue = { 13, 64, 216, 255 };
//
//std::vector<Color> GetCellColors();

#pragma once
#include <vector>
#include <raylib.h>

extern const Color darkGrey;
extern const Color green;
extern const Color red;
extern const Color orange;
extern const Color yellow;
extern const Color purple;
extern const Color cyan;
extern const Color blue;

std::vector<Color> GetCellColors();

