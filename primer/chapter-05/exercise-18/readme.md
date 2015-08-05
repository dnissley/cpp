Exercise 5.18
=============

Explain each of the following loops. Correct any problems that you detect.

**(a)**

    do
        int v1, v2;
        cout << "Please enter two numbers to sum:";
        if (cin >> v1 >> v2)
            cout << "Sum is " << v1 + v2 << endl;
    while (cin);

The body of a do must be a block if it needs to execute more than one statement.

    do {
        int v1, v2;
        cout << "Please enter two numbers to sum:";
        if (vin >> v1 >> v2)
            cout << "Sum is " << v1 + v2 << endl;
    } while (cin);

**(b)**

    do {
        // ...
    } while (int ival = get_response());

You can't define variables in the condition of a do loop.

    int ival = get_response();
    do {
        // ...
    } while (ival = get_response());

**(c)**

    do {
        int ival = get_response();
    } while (ival);

Variables defined in a do loop aren't accessible in the condition.

    int ival = get_response();
    do {
        // ...
    } while (ival);

