Exercise 1.8
============

Of the listed statements the following are legal:

    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" /* "/*" */;

This one is the only illegal statement:

    std::cout << /* "*/" */; 

This is because it is equivalent to:

    std::cout << ;
