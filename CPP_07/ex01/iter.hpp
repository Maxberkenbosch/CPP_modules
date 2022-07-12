#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter (T *array, int lenght, void (*function)(const T &)) {
 for (int i = 0; i < lenght; i++)
    function(array[i]);
}

template <typename T>
void iter (T *array, int lenght, void (*function)( T &)) {
 for (int i = 0; i < lenght; i++)
    function(array[i]);
}

#endif