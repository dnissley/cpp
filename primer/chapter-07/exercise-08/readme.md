Exercise 7.8
============

Why does read define its Sales_data parameter as a plain reference and print define its parameter as a reference to const?

The read function can't define it's Sales_data parameter as a reference to const because it modifies the units_sold and revenue member variables.

The print function doesn't define it's Sales_data parameter as a plain reference because it doesn't modify any properties of the argument.

