#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>

namespace ft {
	template<class T, class Allocator = std::allocator<T> >
	class vector {
	public:
		typedef typename Allocator::reference			reference;
		typedef typename Allocator::const_reference		const_reference;
		typedef implementation defined					iterator;
		typedef implementation defined					const_iterator;
		typedef size_t									size_type; //
		typedef ptrdiff_t								difference_type; //
		typedef T										value_type; //
		typedef Allocator								allocator_type; //
		typedef typename Allocator::pointer				pointer;
		typedef typename Allocator::const_pointer		const_pointer
		typedef std::reverse_iterator<iterator>			reverse_iterator;
		typedef std::reverse_iterator<const_iterator>	const_reverse_iterator;
	};
}


#endif
