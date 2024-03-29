
// 
// Copyright (c) 2011 Jeff Flinn
// 
// Distributed under the Boost Software License, Version 1.0. (See accompanying 
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt) 
// 

#ifndef BOOST_PROCESS_INITIALIZER_STD_IO_HPP
#define BOOST_PROCESS_INITIALIZER_STD_IO_HPP

#include <boost/process/config.hpp>

#include BOOST_PROCESS_PLATFORM_PROMOTE_INITIALIZER_PATH(std_io)

BOOST_PROCESS_PLATFORM_PROMOTE_NAMESPACE(io_initializer)
BOOST_PROCESS_PLATFORM_PROMOTE_NAMESPACE(std_in_from_path)
BOOST_PROCESS_PLATFORM_PROMOTE_NAMESPACE(std_out_to_path)
BOOST_PROCESS_PLATFORM_PROMOTE_NAMESPACE(std_err_to_path)
BOOST_PROCESS_PLATFORM_PROMOTE_NAMESPACE(std_in_from)
BOOST_PROCESS_PLATFORM_PROMOTE_NAMESPACE(std_out_to)
BOOST_PROCESS_PLATFORM_PROMOTE_NAMESPACE(std_err_to)

#endif // BOOST_PROCESS_INITIALIZER_STD_IO_HPP