Exercise 6.22
=============

Write a function to swap two int pointers.

We can do this with references or pointers. References version:

    void swap(int *(&j), int *(&j))
    {
        int *temp = i;
        i = j;
        j = temp;
    }
    
    int main()
    {
        int i = 55, j = 66;
        int *p = &i, *q = &j;
        swap(p, q);
    }

Pointer version:

    void swap(int **i, int **j)
    {
        int *temp = *i;
        *i = *j;
        *j = temp;
    }

    int main()
    {
        int i = 55, j = 66;
        int *p = &i, *q = &j;
        swap(&p, &q);
    }

