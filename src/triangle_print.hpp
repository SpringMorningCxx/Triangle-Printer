#include <print>
#include <string>

constexpr std::string n_blank(int n) { return std::string(n, ' '); }
constexpr std::string n_asterisk(int n) { return std::string(n, '*'); }
constexpr std::string n_chars(int n, char c) { return std::string(n, c); }

class TrianglePrint {
private:
  int line_num = 10;

public:
  explicit TrianglePrint(int n) : line_num(n) {}

public:
  /**
   * @brief Prints a left-aligned right-angled triangle
   *
   * Output consists of increasing number of asterisks per line,
   * aligned to the left with leading spaces to form right angle at left.
   * Example for 3 lines:
   *   "  *"
   *   " **"
   *   "***"
   */
  void left_right_angled_triangle() const;

  /**
   * @brief Prints an inverted left-aligned right-angled triangle
   *
   * Output consists of decreasing number of asterisks per line,
   * aligned to the right with leading spaces to form right angle at bottom
   * left. Example for 3 lines:
   *   "***"
   *   " **"
   *   "  *"
   */
  void inverted_left_right_angled_triangle() const;

  /**
   * @brief Prints a right-aligned right-angled triangle
   *
   * Output consists of increasing number of asterisks per line
   * with no leading spaces, forming right angle at right.
   * Example for 3 lines:
   *   "*"
   *   "**"
   *   "***"
   */
  void right_right_angled_triangle() const;

  /**
   * @brief Prints an inverted right-aligned right-angled triangle
   *
   * Output consists of decreasing number of asterisks per line
   * with no leading spaces, forming inverted right angle at top right.
   * Example for 3 lines:
   *   "***"
   *   "**"
   *   "*"
   */
  void inverted_right_right_angled_triangle() const;

  /**
   * @brief Prints an isosceles triangle (pyramid shape)
   *
   * Output forms a symmetric pyramid with centered asterisks.
   * Each line has an odd number of asterisks increasing from top to bottom.
   * Example for 3 lines:
   *   "  *  "
   *   " *** "
   *   "*****"
   */
  void normal_triangle() const;

  /**
   * @brief Prints an inverted isosceles triangle (upside-down pyramid)
   *
   * Output forms a symmetric inverted pyramid with centered asterisks.
   * Each line has an odd number of asterisks decreasing from top to bottom.
   * Example for 3 lines:
   *   "*****"
   *   " *** "
   *   "  *  "
   */
  void inverted_normal_triangle() const;

  /**
   * @brief Prints a diamond shape
   *
   * Output combines normal and inverted isosceles triangles
   * to form a symmetric diamond shape.
   * Example for 3 lines (upper + lower):
   *   "  *  "
   *   " *** "
   *   "*****"
   *   " *** "
   *   "  *  "
   */
  void diamond() const;
};