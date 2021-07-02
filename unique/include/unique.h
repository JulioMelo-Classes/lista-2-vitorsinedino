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
 essa aqui ficou incompleta, vou considerar 20% pelo trabalho*/
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
  if (eq(*first, *last)) return last;

  InputIt result = first;
  while (++first != last)
  {
    if (!eq(*result, *first)) 
      *(++result)=*first;
  }
  return ++result;
  
}

}
#endif
