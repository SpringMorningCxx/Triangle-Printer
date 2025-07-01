# 🚩 Triangle Pattern Printer - Fun with Shapes!

## Overview

This little C++ program is a playground for printing cool triangle patterns. It uses some neat C++23 tricks to draw shapes in your terminal. Great for learning loops and string fun!

## What's Inside?

The `TrianglePrint` class makes these 7 fun patterns:
1. Right-leaning triangle ▶️ 
2. Upside-down right-leaning triangle 🔽 
3. Left-leaning triangle ◀️ 
4. Upside-down left-leaning triangle 🔼 
5. Pyramid shape 🔺 
6. Upside-down pyramid 🔻 
7. Sparkly diamond 💎 

## How to Play
```cpp
#include "triangle_print.hpp"

int main() {
    TrianglePrint::cool_triangle(5);  // Makes size-5 pyramid!
    TrianglePrint::fancy_diamond(7);  // Size-7 diamond
}
```

## Make It Run
```bash
# Needs C++23
clang++ -std=c++23 -o triangles triangle_demo.cpp
./triangles
```

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

Made with ❤️ for terminal fun!

