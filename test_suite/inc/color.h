/* 
Author: Yicheng Gong
Date: August 27th, 2017
*/

#ifndef COLOR_H
#define COLOR_H

#include <iostream>

namespace Color {
    enum Code {
        FG_RED = 31,
        FG_GREEN = 32
    };

    std::string colored_message(std::string message, Code color_code);
};

#endif
