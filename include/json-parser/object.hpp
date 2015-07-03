// Copyright Felipe Magno de Almeida 2015.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef JSON_PARSER_OBJECT_HPP
#define JSON_PARSER_OBJECT_HPP

#include <json-parser/identifier.hpp>
#include <json-parser/value.hpp>

#include <boost/spirit/home/x3.hpp>

namespace json_parser {

x3::rule<class object> const object("json-parser::object");

auto key_pair_def = identifier >> x3::omit[':'] >> value;
auto object_def = x3::omit['{'] >> (key_pair_def % ',') >> x3::omit['}'];

BOOST_SPIRIT_DEFINE(object);   
                    
  
}

#endif
