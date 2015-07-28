Exercise 4.3
============

Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?

I consider it an acceptable trade-off because it makes reading and writing code easier. The downside is that it can be a source of difficult bugs. There is the option of having the compiler attempt to find errors of this nature, but perhaps that is better left to the likes of a static analyzer tool.

