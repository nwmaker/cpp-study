# C++ table of operators

| Prec/Ass | operator | description | pattern |
| ---------- |:------ | ----- | ---- |
| 1 None | :: | global scope or class scope | ::name, class_name::member_name |
| 2 L->R associativity | () | parentheses | (expression) |
| | () | function call | function_name(parameters) |
| | () | initialization | type name(expression) |
| | {} | uniform initialization (c++11) | type name {expression} |
| | type() | functional cast | new_type(expression) |

| | type{} | 
 [], ., ->, ++, --, typeid, const_cast, dynamic_cast, reinterpret_cast, static_cast |  
