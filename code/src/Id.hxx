#pragma once

#include "Id.hh"

#include <cstdint>



namespace WorldKit {

namespace Book {

class Id
{
	using Data = std::uint64_t;
	Data data;

public:
	explicit Id(Data data) noexcept : data(data) {}
};

} //namespace Book

} //namespace WorldKit
