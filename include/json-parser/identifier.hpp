// Copyright Felipe Magno de Almeida 2015.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef JSON_PARSER_IDENTIFIER_HPP
#define JSON_PARSER_IDENTIFIER_HPP

#include <json-parser/value.hpp>

#include <boost/spirit/home/x3.hpp>

namespace json_parser {

namespace x3 = boost::spirit::x3;
  
auto identifier = -x3::omit['"'] >> +(x3::char_/*("a-zA-Z0-9_\"")*/ - (x3::char_(',') | '}' | ':' | '"')) >> -x3::omit['"'];
  
}

#endif
