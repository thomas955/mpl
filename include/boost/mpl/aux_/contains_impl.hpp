
#ifndef BOOST_MPL_AUX_CONTAINS_IMPL_HPP_INCLUDED
#define BOOST_MPL_AUX_CONTAINS_IMPL_HPP_INCLUDED

// Copyright (c) Eric Friedman 2002
// Copyright (c) Aleksey Gurtovoy 2004
//
// Use, modification and distribution are subject to the Boost Software 
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy 
// at http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source$
// $Date$
// $Revision$

#include <boost/mpl/contains_fwd.hpp>
#include <boost/mpl/begin_end.hpp>
#include <boost/mpl/find.hpp>
#include <boost/mpl/not.hpp>
#include <boost/mpl/aux_/traits_lambda_spec.hpp>

#include <boost/type_traits/is_same.hpp>

namespace boost { namespace mpl {

template< typename Tag >
struct contains_impl
{
    template< typename Sequence, typename T > struct apply
        : not_< is_same<
              typename find<Sequence,T>::type
            , typename end<Sequence>::type
            > >
    {
    };
};

BOOST_MPL_ALGORITM_TRAITS_LAMBDA_SPEC(2,contains_impl)

}}

#endif // BOOST_MPL_AUX_CONTAINS_IMPL_HPP_INCLUDED