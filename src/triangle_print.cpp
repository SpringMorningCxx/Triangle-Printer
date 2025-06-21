#include "triangle_print.hpp"

void TrianglePrint::left_right_angled_triangle() const {
  for (int i = 1; i <= line_num; i++) {
    std::println("{}{}",n_blank(line_num - i), n_asterisk(i));
  }
}
void TrianglePrint::inverted_left_right_angled_triangle() const {
  for (int i = 1; i <= line_num; i++) {
    std::println("{}{}",n_blank(i - 1), n_asterisk(line_num - i + 1));
  }
}

void TrianglePrint::right_right_angled_triangle() const {
  for (int i = 0; i < line_num; i++) {
    std::println("{}", n_asterisk(i + 1));
  }
}

void TrianglePrint::inverted_right_right_angled_triangle() const {
  for (int i = 1; i <= line_num; i++) {
    std::println("{}", n_asterisk(line_num - i + 1));
  }
}

void TrianglePrint::normal_triangle() const {
  const int multi = 2;
  for (int i = 0; i < line_num; i++) {
    std::println("{}{}", n_blank(line_num - i - 1),n_asterisk(i * multi + 1));
  }
}

void TrianglePrint::inverted_normal_triangle() const {
  const int multi = 2;
  for (int i = 0; i < line_num; i++) {
    std::println("{}{}", n_blank(i), n_asterisk((line_num - i) * multi - 1));
  }
}

void TrianglePrint::diamond() const {
  int multi = 2;
  for (int i = 0; i < line_num; i++) {
    std::println("{}{}", n_blank(line_num - i - 1), n_asterisk(i * multi + 1));
  }
  for (int i = 1; i < line_num; i++) {
    std::println("{}{}", n_blank(i), n_asterisk((line_num - i) * multi - 1));
  }
}