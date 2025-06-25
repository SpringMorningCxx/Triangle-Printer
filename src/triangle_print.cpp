#include "triangle_print.hpp"
#include <print>

void TrianglePrint::left_right_angled_triangle() const
{
    for (int i = 1; i <= line_num; i++) {
        std::println("{}{}", n_blank(line_num - i), n_chars(i, chars));
    }
}
void TrianglePrint::inverted_left_right_angled_triangle() const
{
    for (int i = 1; i <= line_num; i++) {
        std::println("{}{}", n_blank(i - 1), n_chars(line_num - i + 1, chars));
    }
}

void TrianglePrint::right_right_angled_triangle() const
{
    for (int i = 0; i < line_num; i++) {
        std::println("{}", n_chars(i + 1, chars));
    }
}

void TrianglePrint::inverted_right_right_angled_triangle() const
{
    for (int i = 1; i <= line_num; i++) {
        std::println("{}", n_chars(line_num - i + 1, chars));
    }
}

void TrianglePrint::normal_triangle() const
{
    const int multi = 2;
    for (int i = 0; i < line_num; i++) {
        std::println("{}{}", n_blank(line_num - i - 1), n_chars(i * multi + 1, chars));
    }
}

void TrianglePrint::inverted_normal_triangle() const
{
    const int multi = 2;
    for (int i = 0; i < line_num; i++) {
        std::println("{}{}", n_blank(i), n_chars((line_num - i) * multi - 1, chars));
    }
}

void TrianglePrint::diamond() const
{
    int multi = 2;
    for (int i = 0; i < line_num; i++) {
        std::println("{}{}", n_blank(line_num - i - 1), n_chars(i * multi + 1, chars));
    }
    for (int i = 1; i < line_num; i++) {
        std::println("{}{}", n_blank(i), n_chars((line_num - i) * multi - 1, chars));
    }
}