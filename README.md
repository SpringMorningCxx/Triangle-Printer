Triangle Pattern Printer

## Overview

This C++ program demonstrates various triangle pattern printing techniques using modern C++23 features. The `TrianglePrint` class generates seven distinct geometric patterns programmatically, showcasing efficient string manipulation and console output capabilities.

## Features

- **Modern C++23 Implementation** - Utilizes `std::print` and `std::string` constexpr functions
- **Seven Geometric Patterns**:
  1. Left-aligned right-angled triangle
  2. Inverted left-aligned right-angled triangle
  3. Right-aligned right-angled triangle
  4. Inverted right-aligned right-angled triangle
  5. Isosceles triangle (pyramid)
  6. Inverted isosceles triangle
  7. Diamond shape
- **Configurable Size** - Pattern dimensions set at runtime
- **Efficient String Handling** - Optimized character repetition functions

## Requirements

- C++23 compatible compiler:
  - Clang 17+ (recommended)
  - GCC 13+
  - MSVC 2022 (17.4+)
- Standard Library with `<print>` support

## Build Instructions

```bash
# Compile with Clang:
clang++ -std=c++23 -o triangle_printer main.cpp triangle_print.cpp

# Compile with GCC:
g++ -std=c++23 -o triangle_printer main.cpp triangle_print.cpp
```

## Usage

Execute the compiled program with:
```bash
./triangle_printer
```

The program will output all seven patterns sequentially, separated by dashed lines.

## Pattern Reference

| Pattern Name                          | Description                                  | Example (size=3) |
|---------------------------------------|----------------------------------------------|------------------|
| `left_right_angled_triangle`          | Left-aligned increasing asterisks            | `  *`<br>` **`<br>`***` |
| `inverted_left_right_angled_triangle` | Left-aligned decreasing asterisks            | `***`<br>` **`<br>`  *` |
| `right_right_angled_triangle`         | Right-aligned increasing asterisks           | `*`<br>`**`<br>`***` |
| `inverted_right_right_angled_triangle`| Right-aligned decreasing asterisks           | `***`<br>`**`<br>`*` |
| `normal_triangle`                     | Centered pyramid with odd-numbered rows      | `  *  `<br>` *** `<br>`*****` |
| `inverted_normal_triangle`            | Inverted centered pyramid                    | `*****`<br>` *** `<br>`  *  ` |
| `diamond`                             | Combined pyramid and inverted pyramid        | `  *  `<br>` *** `<br>`*****`<br>` *** `<br>`  *  ` |

## Implementation Details

- **String Generation**:
  ```cpp
  constexpr std::string n_blank(int n) { return std::string(n, ' '); }
  constexpr std::string n_asterisk(int n) { return std::string(n, '*'); }
  ```
  
- **Pattern Algorithm** (example for pyramid):
  ```cpp
  void TrianglePrint::normal_triangle() const {
    const int multi = 2;
    for (int i = 0; i < line_num; i++) {
      std::print("{}", n_blank(line_num - i - 1));
      std::println("{}", n_asterisk(i * multi + 1));
    }
  }
  ```

## Sample Output

```
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
------------------------------
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
------------------------------
*
**
***
****
*****
******
*******
********
*********
**********
------------------------------
**********
*********
********
*******
******
*****
****
***
**
*
------------------------------
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
------------------------------
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
------------------------------
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
```

## License

This project is open-source under the MIT License.

