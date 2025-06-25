#include "triangle_print.hpp"
#include <print>

int main()
{
    TrianglePrint triangle(10);
    triangle.left_right_angled_triangle();
    std::println("{:-<30}", "");
    triangle.inverted_left_right_angled_triangle();
    std::println("{:-<30}", "");
    triangle.right_right_angled_triangle();
    std::println("{:-<30}", "");
    triangle.inverted_right_right_angled_triangle();
    std::println("{:-<30}", "");
    triangle.normal_triangle();
    std::println("{:-<30}", "");
    triangle.inverted_normal_triangle();
    std::println("{:-<30}", "");
    triangle.diamond();
}