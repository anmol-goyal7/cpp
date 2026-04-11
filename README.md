# C++ From Scratch

A structured collection of C++ programs covering core language concepts — from variables and control flow to classes, references, and the STL. Each folder focuses on a specific topic with self-contained, compilable examples.

## Repository Structure

```
.
├── 01-basics/                        # Variables, initialization, and I/O
├── 02-functions/                     # Function definitions and multi-file programs
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
├── 08-classes/                       # Structs, classes, inheritance, encapsulation
│   └── fraction/                     # Fraction struct (header + implementation)
├── 09-constructors-and-destructors/  # Object lifecycle — construction and destruction
├── 10-vectors/                       # std::vector and custom Vec3 class
└── practice/
    └── hackerrank/                   # HackerRank problem solutions
```

## Topics Covered

| # | Topic | Key Concepts |
|---|-------|--------------|
| 01 | **Basics** | Copy/direct/brace initialization, narrowing conversions, cin/cout |
| 02 | **Functions** | Function declarations, definitions, multi-file compilation, headers |
| 03 | **Strings** | C-style char arrays, null terminator, std::string operations |
| 04 | **Namespaces & Scope** | Namespace definition, nesting, scope resolution (::), constexpr |
| 05 | **Linkage** | Internal/external linkage, static, extern, unnamed namespaces |
| 06 | **Control Flow** | if/else, switch, while, break, goto, nested loop patterns |
| 07 | **References & Values** | Lvalues, rvalues, const lvalue references, implicit conversions |
| 08 | **Classes** | Structs, classes, public/private members, inheritance, enums |
| 09 | **Constructors & Destructors** | Default/parameterized constructors, destructor lifecycle |
| 10 | **Vectors** | std::vector operations, iteration, custom Vec3 class |

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
