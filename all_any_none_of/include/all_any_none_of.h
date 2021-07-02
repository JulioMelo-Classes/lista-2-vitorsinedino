#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
 /*
 80% faltou a documentação
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
  while (first!=last) {
    if (!p(*first)) return false;
    ++first;
  }
  return true; //quando a lista é vazia era pra ser return false, mas blz, vou considerar
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
  while (first!=last) {
    if (p(*first)) return true;
    ++first;
  }
  return false;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
  while (first!=last) {
    if (p(*first)) return false;
    ++first;
  }
  return true;
}

}
#endif
