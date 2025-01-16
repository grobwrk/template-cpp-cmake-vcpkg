find_package (fmt CONFIG REQUIRED)
find_package (spdlog CONFIG REQUIRED)

add_library (lib "lib.hpp" "lib.cpp")
set_target_properties(
	lib
	PROPERTIES
	CXX_STANDARD 20
	LINKER_LANGUAGE CXX
)
target_link_libraries (
	lib
	fmt::fmt-header-only spdlog::spdlog_header_only
)
target_include_directories (lib INTERFACE .) 
