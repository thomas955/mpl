
#ifndef BOOST_MPL_TRANSFORM_VIEW_HPP_INCLUDED
#define BOOST_MPL_TRANSFORM_VIEW_HPP_INCLUDED

// Copyright (c) Aleksey Gurtovoy 2000-2002
//
// Use, modification and distribution are subject to the Boost Software 
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy 
// at http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source$
// $Date$
// $Revision$

#include <boost/mpl/begin_end.hpp>
#include <boost/mpl/lambda.hpp>
#include <boost/mpl/aux_/transform_iter.hpp>
#include <boost/mpl/aux_/na_spec.hpp>

namespace boost {
namespace mpl {

template<
      typename BOOST_MPL_AUX_NA_PARAM(Sequence)
    , typename BOOST_MPL_AUX_NA_PARAM(F)
    >
struct transform_view
{
 private:
    typedef typename lambda<F>::type f_;
    typedef typename begin<Sequence>::type first_;
    typedef typename end<Sequence>::type last_;
 
 public:
    struct tag;
    typedef aux::transform_iter< first_,last_,f_ > begin;
    typedef aux::transform_iter< last_,last_,f_ > end;
};

BOOST_MPL_AUX_NA_SPEC(2, transform_view)

} // namespace mpl
} // namespace boost

#endif // BOOST_MPL_TRANSFORM_VIEW_HPP_INCLUDED