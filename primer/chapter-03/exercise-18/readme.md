Exercise 3.18
=============

Is the following program legal? If not, how might you fix it?

    vector<int> ivec;
    ivec[0] = 42;

The program is not legal. `ivec` is initialized as empty, so attempting to set the zeroth index of the vector is an error.

Instead of trying to use an index to add an element you could use the vector's push_back method:

    vector<int> ivec;
    ivec.push_back(42);

