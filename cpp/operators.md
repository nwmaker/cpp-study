# C++ table of operators

| Prec/Ass | operator | description | pattern |
| ---------- |:------ | ----- | ---- |
| 1 None | :: | global scope or class scope | ::name, class_name::member_name |
| 2 L->R associativity | () | parentheses | (expression) |
| | () | function call | function_name(parameters) |
| | () | initialization | type name(expression) |
| | {} | uniform initialization (c++11) | type name {expression} |
| | type() | functional cast | new_type(expression) |
| | type{} | functional cast (c++11) | new_type{expression} |
| | [] | array subscript | pointer[expression] |
| | . | member access from object | object.member_name |
| | -> | member access from object pointer | object_pointer->member_name |
| | ++ | post-increment | lvalue++ |
| | -- | post-decrement | lvalue-- |
| | typeid | run-time type information | typeid(type) or typeid(expression) |
| | const_cast | cast away const | const_cast<type>(expression) |
| | dynamic_cast | run-time type-checked cast | dynamic_cast<type>(expression) || | reinterpret_cast | cast one type to another | reinterpret_cast<type>(expression) |
| | static_cast | compile-time type-checked cast | static_cast<type>(expression) |
|3 R->L | + | unary plus | +expression |
| | - | unary minus | -expression |
| | ++ | pre-increment | ++lvalue |
| | -- | pre-decrement | --lvalue |
| | ! | logical NOT | !expression |
| | ~ | bitwise NOT | ~expression |
| | (type) | C-style cast | (new_type)expression |
| | sizeof | size in bytes | sizeof(type) or sizeof(expression) |
| | & | address of | &lvalue |
| | * | dereference | *expression |
| | new | dynamic memory allocation | new type |
| | new[] | dynamice array allocation | new type[expression] |
| | delete | dynamic memory deletion | delete pointer |
| | delete[] | dynamic array deletion | delete[] pointer |
|4 L->R | ->* | member pointer selector | object_pointer->*pointer_to_member |
| | .* | member object selector | object.*pointer_to_member |
| 5 L->R | *, /, % | multiplication, division, and modulus | expression * expression |
| 6 L->R | +, - | addion, and minus | expression + expression |
| 7 L->R | <<, >> | bitwise shift left, bitwise shift right | expression >> expression |
| 8 L->R | <, <=, >, >= | comparison | |
| 9 L->R | ==, != | equality, and inequality | |
| 10 L->R | & | bitwise AND | |
| 11 L->R | ^ | bitwise XOR | |
| 12 L->R | \| | bitwise OR | |
| 13 L->R | && | logical AND | |
| 14 L->R | \|\| | logical OR | |
| 15 R->L | ?:, =, *=, /=, %=, +=, -=, <<=, >>=, &=, |=, ^= | conditional, and assignments | |
| 16 R->L | throw | throw expression | |
| 17 L->R | , | comma operator | |



  
