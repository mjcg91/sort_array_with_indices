# ------------------------------------------------------------------------------
# Define library
# ------------------------------------------------------------------------------
add_library( sort_array_with_indices SHARED )

target_compile_definitions( sort_array_with_indices PRIVATE SORT_ARRAY_WITH_INDICES_BUILD_NODEDEF_DLL )
set_target_properties( sort_array_with_indices PROPERTIES LINKER_LANGUAGE CXX) 

# ------------------------------------------------------------------------------
# set binary install path
# ------------------------------------------------------------------------------
install( TARGETS sort_array_with_indices RUNTIME DESTINATION ${SORT_ARRAY_WITH_INDICES_PACK_DIR}/bin )

# ------------------------------------------------------------------------------
# Add dependency libraries
# ------------------------------------------------------------------------------
target_link_libraries( sort_array_with_indices PUBLIC Amino::Core )
target_link_libraries( sort_array_with_indices PUBLIC Amino::Cpp )
target_link_libraries( sort_array_with_indices PUBLIC Bifrost::Math )

target_link_libraries( sort_array_with_indices PUBLIC TBB::tbb )
target_link_libraries( sort_array_with_indices PUBLIC TBB::tbbmalloc )
target_link_libraries( sort_array_with_indices PUBLIC TBB::tbbmalloc_proxy )

# ------------------------------------------------------------------------------
# Add sources
# ------------------------------------------------------------------------------
set(SOURCES
    parallel_merge_sort.h
    sort_array_with_indices.h
    sort_array_with_indices.cpp
    sort_array_with_indices_export.h
)

target_sources( sort_array_with_indices PUBLIC ${SOURCES} )

# ------------------------------------------------------------------------------
# Parse the json files with cpp2json
# ------------------------------------------------------------------------------
# Generate and install the json files
set( HEADERS_TO_PARSE
    sort_array_with_indices.h
)

bifrost_header_parser(  
    sort_array_with_indicesFiles             # Name of the target.
    ${SORT_ARRAY_WITH_INDICES_PACK_DIR}/json # Install dir - relative to install prefix.
    INCLUDES  ${CMAKE_CURRENT_SOURCE_DIR}    # Sources to include
    INPUTS    ${HEADERS_TO_PARSE}            # List of headers to parse
)

# ------------------------------------------------------------------------------
# Create and install the json config file to load the bifrost pack
# ------------------------------------------------------------------------------
set( CONFIG_PACK_VERSION "${PROJECT_VERSION}")
set( CONFIG_PACK_NAME    "${PROJECT_NAME}") 
set( CONFIG_SHARED_LIBS  "bin")
set( CONFIG_JSON_FILES   "json")
set( CONFIG_JSON         ${CMAKE_BINARY_DIR}/bifrost_lib_config.json )

configure_file(bifrost_lib_config.json.template ${CONFIG_JSON} )

install(FILES ${CONFIG_JSON} DESTINATION ${SORT_ARRAY_WITH_INDICES_PACK_DIR} )
