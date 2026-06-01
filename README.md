# C++ Basics Archive

This repository was my learning ground for C++ basics. It collects the small programs and practice files I wrote while building a foundation in the language, starting with simple input/output and adding two numbers, then moving through functions, strings, control flow, references, classes, constructors, and basic vector usage.

I am now moving on to learning DSA, so this repository is mostly a record of the fundamentals rather than an active project. It still holds the core examples I used to understand C++ syntax and behavior, from beginner calculator programs to a simple vector mathematics class.

## Repository Structure

```
.
├── 01-basics/                        # Variables, initialization, and I/O
├── 02-functions/                     # Function definitions and calculator programs
│   └── calculator/                   # Multi-file calculator project (headers + implementation)
├── 03-strings/                       # C-style strings and std::string
├── 04-namespaces-and-scope/          # Namespaces, scope resolution, constexpr constants
│   └── nested-namespaces/            # Inline, traditional, and extended namespace syntax
├── 05-linkage/                       # Internal vs external linkage in C++
│   ├── internal-linkage/             # static globals, unnamed namespaces, constexpr
│   ├── external-linkage/             # extern variables across translation units
│   └── static-functions/             # Static function linkage behavior
├── 06-control-flow/                  # Conditionals, loops, goto, and pattern printing
│   ├── conditionals/                 # if-else, switch, sequential vs branching
│   ├── loops/                        # while, break, ASCII iteration
│   └── patterns/                     # Nested loop pattern programs (triangles)
├── 07-references-and-values/         # Lvalues, rvalues, const references, structured bindings
├── 08-classes/                       # Classes, logging example, inheritance, encapsulation
│   └── fraction/                     # Fraction struct (header + implementation)
├── 09-constructors-and-destructors/  # Object lifecycle — construction and destruction
├── 10-vectors/                       # std::vector examples and custom Vec3 math class
└── practice/
    ├── loops/                        # Extra loop pattern practice
    └── hackerrank/                   # HackerRank problem solutions
```

## Topics Covered

| # | Topic | Key Concepts |
|---|-------|--------------|
| 01 | **Basics** | Copy/direct/brace initialization, narrowing conversions, cin/cout |
| 02 | **Functions** | Function declarations, definitions, simple calculator programs, headers |
| 03 | **Strings** | C-style char arrays, null terminator, std::string operations |
| 04 | **Namespaces & Scope** | Namespace definition, nesting, scope resolution (::), constexpr |
| 05 | **Linkage** | Internal/external linkage, static, extern, unnamed namespaces |
| 06 | **Control Flow** | if/else, switch, while, break, goto, nested loop patterns |
| 07 | **References & Values** | Lvalues, rvalues, const lvalue references, implicit conversions |
| 08 | **Classes** | Classes, public/private members, simple logging, inheritance, enums |
| 09 | **Constructors & Destructors** | Default/parameterized constructors, destructor lifecycle |
| 10 | **Vectors** | std::vector operations, iteration, custom Vec3 math class |

## How to Compile

Each `.cpp` file can be compiled independently (unless it's part of a multi-file project):

```bash
g++ -std=c++17 -Wall -Wextra -o output filename.cpp
```

For multi-file projects (e.g., `02-functions/calculator/`):

```bash
g++ -std=c++17 -Wall -Wextra -o calculator main.cpp math.cpp
```

## Resources

- [learncpp.com](https://www.learncpp.com/)
- [The Cherno — C++ Series (YouTube)](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)
