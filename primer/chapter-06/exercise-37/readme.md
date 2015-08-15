Exercise 6.37
=============

Write three additional declarations for the function in the previous exercise. One should use a type alias, one should use a trailing return, and the third should use decltype. Which form do you prefer and why?

    string s[10] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    
    string (*give_me_strings())[10] 
    {
        return &s;
    }

    using arrT = string[10];
    
    arrT* give_me_strings_typedef();
    
    auto give_me_strings_trailing() -> string(*)[10];
    
    decltype(s) *give_me_strings_decltype();

