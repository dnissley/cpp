Exercise 2.1
============

C++ guarantees certain characteristics of it's base types. For the integer types `int`, `long`, `long long`, and `short` the language makes guarantees about minimum sizes and the size of each type in relation to others. The guarantees are represented in the below table:

Type        | Minimum Size | Relational Guarantee
------------|--------------|-------------------------
`short`     | 16 bits      | N/A
`int`       | 16 bits      | Size >= Size of `short`
`long`      | 32 bits      | Size >= Size of `int`
`long long` | 64 bits      | Size >= Size of `long`

