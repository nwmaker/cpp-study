# C++ data types and others

## const vs constexpr

```constexpr``` is introduced in C++11, it is a compile-time constant.

* Rule: Any variable that should not change values after initialization and whose initializer is known at compile-time should be declared as constexpr.

* Rule: Any variable that should not change values after initialization and whose initializer is not known at compile-time should be declared as const.

## C++ data types
 
| Category | Type | Notes |
| ---------- |:------ | ----- |
| boolean | bool | true or false |
| character | char, wchar_t, char16_t, char32_t | an ASCII character |
| floating point | float, double, long double | a decimal number |
| integer | short, int, long, long long | a whole number |
| void | no type | void |

## literal constants

| Literal value | Examples | default type |
| ---------- |:------ | ----- |
| integral value | 5, 0, -4 | int |
| boolean value | truem false | bool |
| floating point value | 3.14, 2.49 | double |
| char value | 'a' | char |
| C-style string | "hello" | const char[14] |


