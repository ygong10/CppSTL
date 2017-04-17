namespace Color {
    enum Code {
        FG_RED = 31,
        FG_GREEN = 32
    };

    std::string colored_message(std::string message, Code color_code) {
        return "\033[" + std::to_string(color_code) + "m" + message + "\033[0m";
    }
}