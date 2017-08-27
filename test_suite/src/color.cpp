#include "color.h"

std::string Color::colored_message(std::string message, Color::Code color_code) {
    return "\033[" + std::to_string(color_code) + "m" + message + "\033[0m";
}
