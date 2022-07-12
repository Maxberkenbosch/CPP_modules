#ifndef MYFUNCTIONS_HPP
# define MYFUNCTIONS_HPP

template <typename T>
void swap (T &a, T &b) {
 T temp;

 temp = a;
 a = b;
 b = temp;
}

template <class T>T min (const T &a, const T &b) {
 return (a<b?a:b);
}

template <class T>T max (const T &a, const T &b) {
 return (a>b?a:b);
}

#endif